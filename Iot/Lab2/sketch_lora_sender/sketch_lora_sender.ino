#include <Arduino.h>
#include <RadioLib.h>
#include <DHT.h>

#define DHT_PIN 33
#define DHT_TYPE DHT11


#define LORA_SS 18
#define LORA_DIO0 26
#define LORA_RST 14

const float LORA_FREQUENCY = 868.0;
const float LORA_BANDWIDTH = 125.0;
const uint8_t LORA_SPREADING_FACTOR = 7;
const uint8_t LORA_CODING_RATE = 5;
const int8_t LORA_TX_POWER = 10;
const uint8_t LORA_SYNC_WORD = 0x12;

const unsigned long SEND_INTERVAL_MS = 1000;


const float SUPPLY_VOLTAGE_V = 3.3;

float txCurrentMa() {
  switch (LORA_TX_POWER) {
    case 2:  return 30.0;
    case 7:  return 45.0;
    case 10: return 55.0;
    case 14: return 80.0;
    case 17: return 87.0;
    case 20: return 120.0;
    default: return 25.0 + 4.0 * (float)LORA_TX_POWER;
  }
}

SX1276 radio = new Module(LORA_SS, LORA_DIO0, LORA_RST);
DHT dht(DHT_PIN, DHT_TYPE);

unsigned int packetsSent = 0;
float totalEnergyMj = 0.0f;

int16_t beginLoRa() {
#if RADIOLIB_VERSION_MAJOR >= 7
  ConfigLoRa_t config;
  config.frequency = LORA_FREQUENCY;
  config.bandwidth = LORA_BANDWIDTH;
  config.spreadingFactor = LORA_SPREADING_FACTOR;
  config.codingRate = LORA_CODING_RATE;
  config.syncWord = LORA_SYNC_WORD;
  config.power = LORA_TX_POWER;
  config.preambleLength = 8;
  return radio.begin(config);
#else
  return radio.begin(LORA_FREQUENCY, LORA_BANDWIDTH, LORA_SPREADING_FACTOR,
                     LORA_CODING_RATE, LORA_SYNC_WORD, LORA_TX_POWER, 8, 0);
#endif
}

void printSettings() {
  Serial.println("--- Emisor LoRa (sensor DHT11) ---");
  Serial.print("Frecuencia: "); Serial.print(LORA_FREQUENCY); Serial.println(" MHz");
  Serial.print("Ancho de banda: "); Serial.print(LORA_BANDWIDTH); Serial.println(" kHz");
  Serial.print("Spreading factor: SF"); Serial.println(LORA_SPREADING_FACTOR);
  Serial.print("Coding rate: 4/"); Serial.println(LORA_CODING_RATE - 4);
  Serial.print("Potencia de transmision: "); Serial.print(LORA_TX_POWER); Serial.println(" dBm");
  Serial.print("Sync Word: 0x"); Serial.println(LORA_SYNC_WORD, HEX);
  Serial.println("---------------------------");
}

void setup() {
  Serial.begin(115200);
  delay(100);

  Serial.println("Iniciando DHT11...");
  dht.begin();

  int16_t state = beginLoRa();
  if (state != RADIOLIB_ERR_NONE) {
    Serial.print("ERROR: no se pudo iniciar el LoRa, estado=");
    Serial.println(state);
    while (true) {
      delay(1000);
    }
  }

  printSettings();
  Serial.println("Listo para enviar paquetes");
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Lectura DHT incompleta, reintentando...");
    delay(500);
    return;
  }

  char payload[64];
  snprintf(payload, sizeof(payload),
           "{\"seq\":%u,\"temperature\":%.2f,\"humidity\":%.2f}",
           packetsSent + 1, temperature, humidity);

  int16_t state = radio.transmit(payload);
  packetsSent++;

  float airtimeMs = radio.getTimeOnAir(strlen(payload)) / 1000.0f;
  float currentMa = txCurrentMa();
  float energyMj = SUPPLY_VOLTAGE_V * currentMa * airtimeMs / 1000.0f;
  totalEnergyMj += energyMj;

  Serial.print("Paquete LoRa enviado (");
  Serial.print(packetsSent);
  Serial.print("): ");
  Serial.println(payload);

  Serial.print("  Airtime: ");
  Serial.print(airtimeMs, 1);
  Serial.print(" ms | I_tx: ");
  Serial.print(currentMa, 0);
  Serial.print(" mA | Energia: ");
  Serial.print(energyMj, 3);
  Serial.println(" mJ");

  Serial.print("  Acumulada: ");
  Serial.print(totalEnergyMj, 2);
  Serial.print(" mJ | Media/paquete: ");
  Serial.print(totalEnergyMj / packetsSent, 3);
  Serial.println(" mJ");

  if (state != RADIOLIB_ERR_NONE) {
    Serial.print("WARNING: error al transmitir, estado=");
    Serial.println(state);
  }

  Serial.println("--------------------");
  delay(SEND_INTERVAL_MS);
}
