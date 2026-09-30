#include <WiFi.h>
#include <PubSubClient.h>
#include <DHT.h>

#define DHT_PIN 33
#define DHT_TYPE DHT11

const char* WIFI_SSID = "Omar_wifi";
const char* WIFI_PASSWORD = "xxx";

const char* MQTT_SERVER = "10.62.73.167";
const int MQTT_PORT = 1883;



DHT dht(DHT_PIN, DHT_TYPE);


WiFiClient espClient;
PubSubClient mqttClient(espClient);


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

void setup() {

  Serial.begin(115200);
  delay(100);

  Serial.println("Iniciando DHT11...");
  dht.begin();
  connectWiFi();

  mqttClient.setServer(MQTT_SERVER, MQTT_PORT);
}

void loop() {

  if (!mqttClient.connected()) {
    connectMQTT();
  }

  mqttClient.loop();
  Serial.println("Intentando leer DHT11...");

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(temperature)) {
    Serial.println("ERROR: temperatura no disponible");
  } else {
    Serial.print("Temperatura: ");
    Serial.print(temperature);
    Serial.println(" °C");
  }
  if (isnan(humidity)) {
    Serial.println("ERROR: humedad no disponible");
  } else {
    Serial.print("Humedad: ");
    Serial.print(humidity);
    Serial.println(" %");
  }
  if (!isnan(temperature) && !isnan(humidity)) {
    char payload[64];
    snprintf(payload, sizeof(payload),
             "{\"temperature\":%.2f,\"humidity\":%.2f}",
             temperature, humidity);
    mqttClient.publish("sensor/esp01", payload);

    Serial.println("Datos enviados por MQTT");
  }

  Serial.println("--------------------");
  delay(1000);
}
