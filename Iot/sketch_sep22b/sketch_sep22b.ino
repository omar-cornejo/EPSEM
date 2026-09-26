// #include <WiFi.h>

// // Cambia estos datos por los de tu Wi-Fi
// const char* WIFI_SSID = "Omar_wifi";
// const char* WIFI_PASSWORD = "xxx";

// void setup() {
//   Serial.begin(115200);
//   delay(1000);

//   Serial.println();
//   Serial.println("Conectando a Wi-Fi...");

//   WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

//   while (WiFi.status() != WL_CONNECTED) {
//     delay(500);
//     Serial.print(".");
//   }

//   Serial.println();
//   Serial.println("¡Wi-Fi conectado!");
//   Serial.print("IP del ESP32: ");
//   Serial.println(WiFi.localIP());
// }

// void loop() {
//   // Comprobamos periódicamente que seguimos conectados
//   if (WiFi.status() == WL_CONNECTED) {
//     Serial.println("Wi-Fi OK");
//   } else {
//     Serial.println("Wi-Fi desconectado");
//   }

//   delay(5000);
// }
