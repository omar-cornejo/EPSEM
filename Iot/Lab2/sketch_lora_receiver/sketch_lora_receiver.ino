#include <Arduino.h>
#include <RadioLib.h>
#include <WiFi.h>
#include <PubSubClient.h>
#define LORA_SS    18
#define LORA_DIO0  26
#define LORA_RST   14
#define LORA_DIO1  35

const float LORA_FREQUENCY = 868.0;
const float LORA_BANDWIDTH = 125.0;
const uint8_t LORA_SPREADING_FACTOR = 7;
const uint8_t LORA_CODING_RATE = 5;
const uint8_t LORA_SYNC_WORD = 0x12;

const char* WIFI_SSID = "Omar_wifi";
const char* WIFI_PASSWORD = "xxxx";

const char* MQTT_SERVER = "10.62.73.167";
const int MQTT_PORT = 1884;
const char* MQTT_TOPIC = "sensor/esp01_lora";
const char* MQTT_CLIENT_ID = "ESP32-LoRa-Gateway";

SX1276 radio = new Module(LORA_SS, LORA_DIO0, LORA_RST, LORA_DIO1);

WiFiClient espClient;
PubSubClient mqttClient(espClient);

volatile bool receivedFlag = false;

unsigned int packetsReceived = 0;
unsigned int packetsInvalid = 0;
unsigned int packetsPublished = 0;

long lastSeq = -1;
unsigned int packetsLost = 0;

#if defined(ESP8266) || defined(ESP32)
  ICACHE_RAM_ATTR
#endif
void setFlag(void) {
  receivedFlag = true;
}

void connectWiFi() {
  Serial.print("Conectando a Wi-Fi: ");
  Serial.println(WIFI_SSID);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

  int retries = 0;

  while (WiFi.status() != WL_CONNECTED && retries < 30) {
    delay(500);
    Serial.print(".");
    retries++;
  }

  Serial.println();

  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("Wi-Fi conectado!");
    Serial.print("IP: ");
    Serial.println(WiFi.localIP());
  } else {
    Serial.println("ERROR: No se pudo conectar a Wi-Fi. Reintentando...");
    delay(2000);
    ESP.restart();
  }
}

void connectMQTT() {
  while (!mqttClient.connected()) {
    Serial.print("Conectando a MQTT...");

    if (mqttClient.connect(MQTT_CLIENT_ID)) {
      Serial.println(" conectado!");
    } else {
      Serial.print(" error, estado=");
      Serial.print(mqttClient.state());
      Serial.println(" - reintentando en 2s...");
      delay(2000);
    }
  }
}

void setup() {
  Serial.begin(115200);
  while (!Serial);
  delay(1000);

  Serial.println("\n--- Iniciando Receptor LoRa → MQTT ---");

  SPI.begin(5, 19, 27, 18);

#if RADIOLIB_VERSION_MAJOR >= 7
  ConfigLoRa_t config;
  config.frequency = LORA_FREQUENCY;
  config.bandwidth = LORA_BANDWIDTH;
  config.spreadingFactor = LORA_SPREADING_FACTOR;
  config.codingRate = LORA_CODING_RATE;
  config.syncWord = LORA_SYNC_WORD;

  int16_t state = radio.begin(config);
#else
  int16_t state = radio.begin(
    LORA_FREQUENCY,
    LORA_BANDWIDTH,
    LORA_SPREADING_FACTOR,
    LORA_CODING_RATE,
    LORA_SYNC_WORD,
    14,
    8,
    0
  );
#endif

  if (state != RADIOLIB_ERR_NONE) {
    Serial.print("ERROR al iniciar LoRa, codigo: ");
    Serial.println(state);

    while (true) {
      delay(1000);
    }
  }

  radio.setPacketReceivedAction(setFlag);

  state = radio.startReceive();

  if (state != RADIOLIB_ERR_NONE) {
    Serial.print("ERROR al activar modo receptor, codigo: ");
    Serial.println(state);
  } else {
    Serial.println("Radio LoRa lista y escuchando.");
  }

  connectWiFi();

  mqttClient.setServer(MQTT_SERVER, MQTT_PORT);
  mqttClient.setBufferSize(256);
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    connectWiFi();
  }

  if (!mqttClient.connected()) {
    connectMQTT();
  }

  mqttClient.loop();

  if (receivedFlag) {
    receivedFlag = false;

    String str;
    int16_t state = radio.readData(str);

    if (state == RADIOLIB_ERR_NONE) {
      packetsReceived++;
      str.trim();

      float rssi = radio.getRSSI();
      float snr = radio.getSNR();

      long seq = -1;
      int seqPos = str.indexOf("\"seq\":");
      if (seqPos >= 0) {
        seq = str.substring(seqPos + 6).toInt();
        if (lastSeq >= 0 && seq > lastSeq + 1) {
          packetsLost += seq - lastSeq - 1;
        }
        lastSeq = seq;
      }
      unsigned int expected = packetsReceived + packetsLost;
      float lossPct = expected ? 100.0f * packetsLost / expected : 0.0f;

      String payload = str;
      if (payload.endsWith("}")) {
        payload.remove(payload.length() - 1);
        payload += ",\"rssi\":" + String(rssi, 0) +
                   ",\"snr\":" + String(snr, 1) +
                   ",\"lost\":" + String(packetsLost) + "}";
      }

      Serial.print("[LoRa RX] ");
      Serial.print(str);
      Serial.print("  RSSI=");
      Serial.print(rssi, 0);
      Serial.print(" dBm  SNR=");
      Serial.print(snr, 1);
      Serial.println(" dB");

      if (mqttClient.publish(MQTT_TOPIC, payload.c_str())) {
        packetsPublished++;
        Serial.println("[MQTT] Publicado correctamente");
      } else {
        Serial.print("[MQTT] Error al publicar, estado=");
        Serial.println(mqttClient.state());
      }

      Serial.print("  Recibidos: ");
      Serial.print(packetsReceived);
      Serial.print("  Invalidos: ");
      Serial.print(packetsInvalid);
      Serial.print("  Publicados: ");
      Serial.print(packetsPublished);
      Serial.print("  Perdidos: ");
      Serial.print(packetsLost);
      Serial.print("  Perdida: ");
      Serial.print(lossPct, 1);
      Serial.println(" %");
    } else {
      packetsInvalid++;
      Serial.print("[LoRa ERR] Lectura fallida, codigo: ");
      Serial.println(state);
    }

    radio.startReceive();
  }
}