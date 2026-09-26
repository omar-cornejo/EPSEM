#include <WiFi.h>
#include <PubSubClient.h>
#include <DHT.h>

// =========================
// WIFI
// =========================

const char* WIFI_SSID = "MiFibra-28EB";
const char* WIFI_PASSWORD = "xxx";

// =========================
// MQTT
// =========================

const char* MQTT_SERVER = "192.168.1.35";
const int MQTT_PORT = 1883;

// =========================
// DHT11
// =========================

#define DHT_PIN 33
#define DHT_TYPE DHT11

DHT dht(DHT_PIN, DHT_TYPE);

// =========================
// MQTT
// =========================

WiFiClient espClient;
PubSubClient mqttClient(espClient);


// =========================
// CONECTAR WIFI
// =========================

void connectWiFi() {

  Serial.print("Conectando a Wi-Fi");

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("Wi-Fi conectado!");

  Serial.print("IP del ESP32: ");
  Serial.println(WiFi.localIP());
}


// =========================
// CONECTAR MQTT
// =========================

void connectMQTT() {

  while (!mqttClient.connected()) {

    Serial.print("Conectando a MQTT...");

    if (mqttClient.connect("ESP32-DHT11")) {

      Serial.println(" conectado!");

    } else {

      Serial.print(" error, estado=");
      Serial.println(mqttClient.state());

      delay(5000);
    }
  }
}


// =========================
// SETUP
// =========================

void setup() {

  Serial.begin(115200);
  delay(100);

  Serial.println("Iniciando DHT11...");

  // Inicializar DHT11
  dht.begin();

  // Conectar Wi-Fi
  connectWiFi();

  // Configurar MQTT
  mqttClient.setServer(MQTT_SERVER, MQTT_PORT);
}


// =========================
// LOOP
// =========================

void loop() {

  // Comprobar MQTT
  if (!mqttClient.connected()) {
    connectMQTT();
  }

  mqttClient.loop();


  // =========================
  // LEER DHT11
  // =========================

  Serial.println("Intentando leer DHT11...");

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();


  // Comprobar temperatura

  if (isnan(temperature)) {

    Serial.println("ERROR: temperatura no disponible");

  } else {

    Serial.print("Temperatura: ");
    Serial.print(temperature);
    Serial.println(" °C");
  }


  // Comprobar humedad

  if (isnan(humidity)) {

    Serial.println("ERROR: humedad no disponible");

  } else {

    Serial.print("Humedad: ");
    Serial.print(humidity);
    Serial.println(" %");
  }


  // =========================
  // ENVIAR POR MQTT
  // =========================

  if (!isnan(temperature) && !isnan(humidity)) {

    char temperatureString[10];
    char humidityString[10];

    dtostrf(temperature, 1, 2, temperatureString);
    dtostrf(humidity, 1, 2, humidityString);


    mqttClient.publish(
      "sensor/temperature",
      temperatureString
    );

    mqttClient.publish(
      "sensor/humidity",
      humidityString
    );


    Serial.println("Datos enviados por MQTT");
  }


  Serial.println("--------------------");

  delay(3000);
}
