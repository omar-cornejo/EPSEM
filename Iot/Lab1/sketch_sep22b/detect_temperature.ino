// #include <DHT.h>

// #define DHT_PIN 33
// #define DHT_TYPE DHT11

// DHT dht(DHT_PIN, DHT_TYPE);

// void setup() {
//   Serial.begin(115200);
//   delay(2000);

//   Serial.println("Iniciando DHT11...");
//   dht.begin();
// }

// void loop() {
//   Serial.println("Intentando leer DHT11...");

//   float humidity = dht.readHumidity();
//   float temperature = dht.readTemperature();

//   if (isnan(temperature)) {
//     Serial.println("ERROR: temperatura no disponible");
//   } else {
//     Serial.print("Temperatura: ");
//     Serial.print(temperature);
//     Serial.println(" °C");
//   }

//   if (isnan(humidity)) {
//     Serial.println("ERROR: humedad no disponible");
//   } else {
//     Serial.print("Humedad: ");
//     Serial.print(humidity);
//     Serial.println(" %");
//   }

//   Serial.println("--------------------");

//   delay(3000);
// }
