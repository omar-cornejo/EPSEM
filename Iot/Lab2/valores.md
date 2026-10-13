# valores obtenidos de logs de Arduino
# 5.4 Experiments on LoRa parameters
## • Adjusting the bandwidth and data rate to balance transmission speed and range.
### Test con: const float LORA_BANDWIDTH = 125.0; const uint8_t LORA_SPREADING_FACTOR = 7;
####  sended:
Paquete LoRa enviado (26): {"temperature":23.80,"humidity":73.00}
--------------------
Paquete LoRa enviado (27): {"temperature":23.80,"humidity":73.00}
--------------------
Paquete LoRa enviado (28): {"temperature":23.80,"humidity":73.00}
--------------------
Paquete LoRa enviado (29): {"temperature":23.80,"humidity":73.00}
--------------------
Paquete LoRa enviado (30): {"temperature":23.80,"humidity":73.00}
--------------------
Paquete LoRa enviado (31): {"temperature":23.80,"humidity":73.00}
--------------------
Paquete LoRa enviado (32): {"temperature":23.80,"humidity":73.00}
--------------------
Paquete LoRa enviado (33): {"temperature":23.80,"humidity":73.00}
--------------------
Paquete LoRa enviado (34): {"temperature":23.80,"humidity":73.00}
--------------------
Paquete LoRa enviado (35): {"temperature":23.80,"humidity":73.00}
--------------------
Paquete LoRa enviado (36): {"temperature":23.80,"humidity":73.00}
Paquete LoRa enviado (154): {"temperature":24.10,"humidity":73.00}
--------------------
Paquete LoRa enviado (155): {"temperature":24.10,"humidity":73.00}
--------------------
Paquete LoRa enviado (156): {"temperature":24.10,"humidity":73.00}
--------------------
Paquete LoRa enviado (157): {"temperature":24.10,"humidity":73.00}
--------------------
Paquete LoRa enviado (158): {"temperature":24.10,"humidity":73.00}
--------------------
Paquete LoRa enviado (159): {"temperature":24.10,"humidity":73.00}
--------------------
Paquete LoRa enviado (160): {"temperature":24.10,"humidity":73.00}
--------------------
Paquete LoRa enviado (161): {"temperature":24.10,"humidity":73.00}

#### recived:
##### si acerco la placa:
[LoRa RX] {"temperature":23.80,"humidity":73.00}  RSSI=-20 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 108  Invalidos: 0  Publicados: 108
[LoRa RX] {"temperature":23.80,"humidity":73.00}  RSSI=-17 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 109  Invalidos: 0  Publicados: 109
[LoRa RX] {"temperature":23.80,"humidity":73.00}  RSSI=-14 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 110  Invalidos: 0  Publicados: 110
[LoRa RX] {"temperature":23.80,"humidity":73.00}  RSSI=-18 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 111  Invalidos: 0  Publicados: 111
[LoRa RX] {"temperature":23.80,"humidity":73.00}  RSSI=-14 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 112  Invalidos: 0  Publicados: 112
[LoRa RX] {"temperature":23.80,"humidity":73.00}  RSSI=-14 dBm  SNR=9.3 dB
[MQTT] Publicado correctamente


##### si alejo la placa:
 Recibidos: 27  Invalidos: 0  Publicados: 27
[LoRa RX] {"temperature":23.80,"humidity":73.00}  RSSI=-52 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 28  Invalidos: 0  Publicados: 28
[LoRa RX] {"temperature":23.80,"humidity":73.00}  RSSI=-52 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 29  Invalidos: 0  Publicados: 29
[LoRa RX] {"temperature":23.80,"humidity":73.00}  RSSI=-54 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 30  Invalidos: 0  Publicados: 30
[LoRa RX] {"temperature":23.80,"humidity":73.00}  RSSI=-55 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 31  Invalidos: 0  Publicados: 31
[LoRa RX] {"temperature":23.80,"humidity":73.00}  RSSI=-46 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente
  Recibidos: 32  Invalidos: 0  Publicados: 32
[LoRa RX] {"temperature":23.80,"humidity":73.00}  RSSI=-42 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 33  Invalidos: 0  Publicados: 33
[LoRa RX] {"temperature":23.80,"humidity":73.00}  RSSI=-44 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 34  Invalidos: 0  Publicados: 34
[LoRa RX] {"temperature":23.80,"humidity":73.00}  RSSI=-50 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 35  Invalidos: 0  Publicados: 35
[LoRa RX] {"temperature":23.80,"humidity":73.00}  RSSI=-40 dBm  SNR=9.8 dB

##### distancia normal:

Conectando a MQTT... conectado!
[LoRa RX] {"temperature":23.80,"humidity":73.00}  RSSI=-33 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 1  Invalidos: 0  Publicados: 1
[LoRa RX] {"temperature":23.80,"humidity":73.00}  RSSI=-33 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 2  Invalidos: 0  Publicados: 2
[LoRa RX] {"temperature":23.80,"humidity":73.00}  RSSI=-33 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 3  Invalidos: 0  Publicados: 3
[LoRa RX] {"temperature":23.80,"humidity":73.00}  RSSI=-33 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 4  Invalidos: 0  Publicados: 4
[LoRa RX] {"temperature":23.80,"humidity":73.00}  RSSI=-33 dBm  SNR=9.8 dB



### Test con: const float LORA_BANDWIDTH = 250.0; const uint8_t LORA_SPREADING_FACTOR = 9;
####  sended:
Paquete LoRa enviado (12): {"temperature":24.10,"humidity":73.00}
--------------------
Paquete LoRa enviado (13): {"temperature":24.10,"humidity":73.00}
--------------------
Paquete LoRa enviado (14): {"temperature":24.10,"humidity":73.00}
--------------------
Paquete LoRa enviado (15): {"temperature":24.10,"humidity":73.00}
--------------------
Paquete LoRa enviado (16): {"temperature":24.10,"humidity":73.00}
--------------------
Paquete LoRa enviado (17): {"temperature":24.10,"humidity":73.00}
--------------------
Paquete LoRa enviado (18): {"temperature":24.10,"humidity":73.00}
--------------------
Paquete LoRa enviado (19): {"temperature":24.10,"humidity":73.00}


#### recived:
##### si acerco la placa:

[MQTT] Publicado correctamente
  Recibidos: 44  Invalidos: 0  Publicados: 44
[LoRa RX] {"temperature":24.10,"humidity":73.00}  RSSI=-34 dBm  SNR=11.5 dB
[MQTT] Publicado correctamente
  Recibidos: 45  Invalidos: 0  Publicados: 45
[LoRa RX] {"temperature":24.10,"humidity":73.00}  RSSI=-29 dBm  SNR=11.8 dB
[MQTT] Publicado correctamente
  Recibidos: 46  Invalidos: 0  Publicados: 46
[LoRa RX] {"temperature":24.10,"humidity":73.00}  RSSI=-26 dBm  SNR=14.3 dB
[MQTT] Publicado correctamente
  Recibidos: 47  Invalidos: 0  Publicados: 47
[LoRa RX] {"temperature":24.10,"humidity":73.00}  RSSI=-27 dBm  SNR=13.5 dB
[MQTT] Publicado correctamente
  Recibidos: 48  Invalidos: 0  Publicados: 48
[LoRa RX] {"temperature":24.10,"humidity":73.00}  RSSI=-29 dBm  SNR=10.3 dB
[MQTT] Publicado correctamente
  Recibidos: 49  Invalidos: 0  Publicados: 49
[LoRa RX] {"temperature":24.10,"humidity":73.00}  RSSI=-30 dBm  SNR=14.0 dB

##### si alejo la placa:
[MQTT] Publicado correctamente
  Recibidos: 32  Invalidos: 0  Publicados: 32
[LoRa RX] {"temperature":24.10,"humidity":73.00}  RSSI=-47 dBm  SNR=14.3 dB
[MQTT] Publicado correctamente
  Recibidos: 33  Invalidos: 0  Publicados: 33
[LoRa RX] {"temperature":24.10,"humidity":73.00}  RSSI=-50 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente
  Recibidos: 34  Invalidos: 0  Publicados: 34
[LoRa RX] {"temperature":24.10,"humidity":73.00}  RSSI=-52 dBm  SNR=14.3 dB
[MQTT] Publicado correctamente
  Recibidos: 35  Invalidos: 0  Publicados: 35
[LoRa RX] {"temperature":24.10,"humidity":73.00}  RSSI=-52 dBm  SNR=13.8 dB
[MQTT] Publicado correctamente
  Recibidos: 36  Invalidos: 0  Publicados: 36
[LoRa RX] {"temperature":24.10,"humidity":73.00}  RSSI=-52 dBm  SNR=13.8 dB
[MQTT] Publicado correctamente


##### distancia normal:
[MQTT] Publicado correctamente
  Recibidos: 1  Invalidos: 0  Publicados: 1
[LoRa RX] {"temperature":24.10,"humidity":73.00}  RSSI=-41 dBm  SNR=14.3 dB
[MQTT] Publicado correctamente
  Recibidos: 2  Invalidos: 0  Publicados: 2
[LoRa RX] {"temperature":24.10,"humidity":73.00}  RSSI=-39 dBm  SNR=10.5 dB
[MQTT] Publicado correctamente
  Recibidos: 3  Invalidos: 0  Publicados: 3
[LoRa RX] {"temperature":24.10,"humidity":73.00}  RSSI=-36 dBm  SNR=13.8 dB
[MQTT] Publicado correctamente
  Recibidos: 4  Invalidos: 0  Publicados: 4
[LoRa RX] {"temperature":24.10,"humidity":73.00}  RSSI=-37 dBm  SNR=13.5 dB
[MQTT] Publicado correctamente
  Recibidos: 5  Invalidos: 0  Publicados: 5
[LoRa RX] {"temperature":24.10,"humidity":73.00}  RSSI=-36 dBm  SNR=13.8 dB
[MQTT] Publicado correctamente
  Recibidos: 6  Invalidos: 0  Publicados: 6
[LoRa RX] {"temperature":24.10,"humidity":73.00}  RSSI=-38 dBm  SNR=13.8 dB


### Test con: const float LORA_BANDWIDTH = 500.0; const uint8_t LORA_SPREADING_FACTOR = 9;
####  sended:
--------------------
Paquete LoRa enviado (52): {"temperature":25.30,"humidity":69.00}
--------------------
Paquete LoRa enviado (53): {"temperature":25.30,"humidity":69.00}
--------------------
Paquete LoRa enviado (54): {"temperature":25.30,"humidity":69.00}
--------------------
Paquete LoRa enviado (55): {"temperature":25.30,"humidity":69.00}
--------------------
Paquete LoRa enviado (56): {"temperature":25.30,"humidity":69.00}
--------------------
Paquete LoRa enviado (57): {"temperature":25.30,"humidity":69.00}


#### recived:
##### si acerco la placa:

[MQTT] Publicado correctamente
  Recibidos: 30  Invalidos: 0  Publicados: 30
[LoRa RX] {"temperature":25.30,"humidity":69.00}  RSSI=-25 dBm  SNR=8.3 dB
[MQTT] Publicado correctamente
  Recibidos: 31  Invalidos: 0  Publicados: 31
[LoRa RX] {"temperature":25.30,"humidity":69.00}  RSSI=-26 dBm  SNR=8.0 dB
[MQTT] Publicado correctamente
  Recibidos: 32  Invalidos: 0  Publicados: 32
[LoRa RX] {"temperature":25.30,"humidity":69.00}  RSSI=-25 dBm  SNR=7.7 dB
[MQTT] Publicado correctamente
  Recibidos: 33  Invalidos: 0  Publicados: 33
[LoRa RX] {"temperature":25.30,"humidity":69.00}  RSSI=-28 dBm  SNR=7.5 dB
[MQTT] Publicado correctamente
  Recibidos: 34  Invalidos: 0  Publicados: 34
[LoRa RX] {"temperature":25.30,"humidity":69.00}  RSSI=-25 dBm  SNR=8.0 dB
[MQTT] Publicado correctamente
  Recibidos: 35  Invalidos: 0  Publicados: 35
[LoRa RX] {"temperature":25.30,"humidity":69.00}  RSSI=-22 dBm  SNR=7.2 dB

##### si alejo la placa:
[LoRa RX] {"temperature":25.30,"humidity":69.00}  RSSI=-49 dBm  SNR=5.7 dB
[MQTT] Publicado correctamente
  Recibidos: 17  Invalidos: 0  Publicados: 17
[LoRa RX] {"temperature":25.30,"humidity":69.00}  RSSI=-48 dBm  SNR=7.2 dB
[MQTT] Publicado correctamente
  Recibidos: 18  Invalidos: 0  Publicados: 18
[LoRa RX] {"temperature":25.30,"humidity":69.00}  RSSI=-49 dBm  SNR=7.0 dB
[MQTT] Publicado correctamente
  Recibidos: 19  Invalidos: 0  Publicados: 19
[LoRa RX] {"temperature":25.30,"humidity":69.00}  RSSI=-50 dBm  SNR=6.5 dB
[MQTT] Publicado correctamente
  Recibidos: 20  Invalidos: 0  Publicados: 20
[LoRa RX] {"temperature":25.30,"humidity":69.00}  RSSI=-51 dBm  SNR=8.3 dB
[MQTT] Publicado correctamente
  Recibidos: 21  Invalidos: 0  Publicados: 21
[LoRa RX] {"temperature":25.30,"humidity":69.00}  RSSI=-51 dBm  SNR=8.0 dB
[MQTT] Publicado correctamente
  Recibidos: 22  Invalidos: 0  Publicados: 22
[LoRa RX] {"temperature":25.30,"humidity":69.00}  RSSI=-51 dBm  SNR=8.0 dB
[MQTT] Publicado correctamente
  Recibidos: 23  Invalidos: 0  Publicados: 23
[LoRa RX] {"temperature":25.30,"humidity":69.00}  RSSI=-51 dBm  SNR=7.7 dB
[MQTT] Publicado correctamente


##### distancia normal:
[LoRa RX] {"temperature":25.30,"humidity":69.00}  RSSI=-36 dBm  SNR=8.3 dB
[MQTT] Publicado correctamente
  Recibidos: 42  Invalidos: 0  Publicados: 42
[LoRa RX] {"temperature":25.30,"humidity":69.00}  RSSI=-36 dBm  SNR=7.7 dB
[MQTT] Publicado correctamente
  Recibidos: 43  Invalidos: 0  Publicados: 43
[LoRa RX] {"temperature":25.30,"humidity":69.00}  RSSI=-37 dBm  SNR=8.3 dB
[MQTT] Publicado correctamente
  Recibidos: 44  Invalidos: 0  Publicados: 44
[LoRa RX] {"temperature":25.30,"humidity":69.00}  RSSI=-44 dBm  SNR=5.7 dB
[MQTT] Publicado correctamente
  Recibidos: 45  Invalidos: 0  Publicados: 45
[LoRa RX] {"temperature":25.30,"humidity":69.00}  RSSI=-40 dBm  SNR=8.0 dB
[MQTT] Publicado correctamente
  Recibidos: 46  Invalidos: 0  Publicados: 46
[LoRa RX] {"temperature":25.30,"humidity":69.00}  RSSI=-38 dBm  SNR=7.0 dB
[MQTT] Publicado correctamente
  Recibidos: 47  Invalidos: 0  Publicados: 47
[LoRa RX] {"temperature":25.30,"humidity":69.00}  RSSI=-35 dBm  SNR=8.3 dB
[MQTT] Publicado correctamente
  Recibidos: 48  Invalidos: 0  Publicados: 48
[LoRa RX] {"temperature":25.30,"humidity":69.00}  RSSI=-35 dBm  SNR=8.0 dB
[MQTT] Publicado correctamente



## • Changing transmission power to evaluate energy consumption and signal strength.




### LORA_TX_POWER = 7 BWD 125;

####  sended:
Paquete LoRa enviado (9): {"temperature":27.10,"humidity":70.00}
  Airtime: 83.0 ms | I_tx: 45 mA | Energia: 12.325 mJ
  Acumulada: 110.93 mJ | Media/paquete: 12.325 mJ
--------------------
Paquete LoRa enviado (10): {"temperature":27.10,"humidity":70.00}
  Airtime: 83.0 ms | I_tx: 45 mA | Energia: 12.325 mJ
  Acumulada: 123.25 mJ | Media/paquete: 12.325 mJ
--------------------
Paquete LoRa enviado (11): {"temperature":27.10,"humidity":70.00}
  Airtime: 83.0 ms | I_tx: 45 mA | Energia: 12.325 mJ
  Acumulada: 135.58 mJ | Media/paquete: 12.325 mJ
--------------------
Paquete LoRa enviado (12): {"temperature":27.10,"humidity":70.00}
  Airtime: 83.0 ms | I_tx: 45 mA | Energia: 12.325 mJ
  Acumulada: 147.91 mJ | Media/paquete: 12.325 mJ
--------------------
Paquete LoRa enviado (13): {"temperature":27.10,"humidity":70.00}
  Airtime: 83.0 ms | I_tx: 45 mA | Energia: 12.325 mJ
  Acumulada: 160.23 mJ | Media/paquete: 12.325 mJ
--------------------

### received:
##### si acerco la placa:
  Recibidos: 27  Invalidos: 1  Publicados: 27
[LoRa RX] {"temperature":27.60,"humidity":72.00}  RSSI=-26 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 28  Invalidos: 1  Publicados: 28
[LoRa RX] {"temperature":27.60,"humidity":72.00}  RSSI=-28 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente
  Recibidos: 29  Invalidos: 1  Publicados: 29
[LoRa RX] {"temperature":27.60,"humidity":72.00}  RSSI=-28 dBm  SNR=11.0 dB
[MQTT] Publicado correctamente
  Recibidos: 30  Invalidos: 1  Publicados: 30
[LoRa RX] {"temperature":27.60,"humidity":72.00}  RSSI=-27 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 31  Invalidos: 1  Publicados: 31
[LoRa RX] {"temperature":27.60,"humidity":72.00}  RSSI=-24 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 32  Invalidos: 1  Publicados: 32
[LoRa RX] {"temperature":27.60,"humidity":72.00}  RSSI=-20 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente
  Recibidos: 33  Invalidos: 1  Publicados: 33

##### si alejo la placa:
[MQTT] Publicado correctamente
  Recibidos: 11  Invalidos: 1  Publicados: 11
[LoRa RX] {"temperature":27.10,"humidity":72.00}  RSSI=-48 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 12  Invalidos: 1  Publicados: 12
[LoRa RX] {"temperature":27.10,"humidity":72.00}  RSSI=-48 dBm  SNR=9.3 dB
[MQTT] Publicado correctamente
  Recibidos: 13  Invalidos: 1  Publicados: 13
[LoRa RX] {"temperature":27.10,"humidity":73.00}  RSSI=-50 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 14  Invalidos: 1  Publicados: 14
[LoRa RX] {"temperature":27.10,"humidity":73.00}  RSSI=-53 dBm  SNR=9.3 dB
[MQTT] Publicado correctamente
  Recibidos: 15  Invalidos: 1  Publicados: 15
[LoRa RX] {"temperature":27.20,"humidity":73.00}  RSSI=-55 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente
  Recibidos: 16  Invalidos: 1  Publicados: 16
[LoRa RX] {"temperature":27.20,"humidity":73.00}  RSSI=-55 dBm  SNR=10.3 dB
[MQTT] Publicado correctamente
  Recibidos: 17  Invalidos: 1  Publicados: 17
[LoRa RX] {"temperature":27.50,"humidity":73.00}  RSSI=-54 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 18  Invalidos: 1  Publicados: 18
[LoRa RX] {"temperature":27.50,"humidity":73.00}  RSSI=-53 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 19  Invalidos: 1  Publicados: 19
[LoRa RX] {"temperature":27.60,"humidity":73.00}  RSSI=-53 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente

##### distancia normal:
LoRa RX] {"temperature":27.10,"humidity":71.00}  RSSI=-35 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 1  Invalidos: 0  Publicados: 1
[LoRa RX] {"temperature":27.10,"humidity":71.00}  RSSI=-33 dBm  SNR=9.0 dB
[MQTT] Publicado correctamente
  Recibidos: 2  Invalidos: 0  Publicados: 2
[LoRa RX] {"temperature":27.10,"humidity":71.00}  RSSI=-33 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 3  Invalidos: 0  Publicados: 3
[LoRa RX] {"temperature":27.10,"humidity":71.00}  RSSI=-35 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 4  Invalidos: 0  Publicados: 4
[LoRa RX] {"temperature":27.10,"humidity":71.00}  RSSI=-34 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 5  Invalidos: 0  Publicados: 5
[LoRa RX] {"temperature":27.10,"humidity":71.00}  RSSI=-39 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 6  Invalidos: 0  Publicados: 6
[LoRa RX] {"temperature":27.10,"humidity":71.00}  RSSI=-34 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 7  Invalidos: 0  Publicados: 7
[LoRa RX] {"temperature":27.10,"humidity":71.00}  RSSI=-39 dBm  SNR=9.0 dB


### LORA_TX_POWER = 10 BWD 125;

####  sended:

  Acumulada: 286.23 mJ | Media/paquete: 15.065 mJ
--------------------
Paquete LoRa enviado (20): {"temperature":26.70,"humidity":72.00}
  Airtime: 83.0 ms | I_tx: 55 mA | Energia: 15.064 mJ
  Acumulada: 301.29 mJ | Media/paquete: 15.065 mJ
--------------------
Paquete LoRa enviado (21): {"temperature":26.70,"humidity":72.00}
  Airtime: 83.0 ms | I_tx: 55 mA | Energia: 15.064 mJ
  Acumulada: 316.35 mJ | Media/paquete: 15.065 mJ
--------------------
Paquete LoRa enviado (22): {"temperature":26.70,"humidity":72.00}
  Airtime: 83.0 ms | I_tx: 55 mA | Energia: 15.064 mJ
  Acumulada: 331.42 mJ | Media/paquete: 15.065 mJ
--------------------
Paquete LoRa enviado (23): {"temperature":26.70,"humidity":72.00}
  Airtime: 83.0 ms | I_tx: 55 mA | Energia: 15.064 mJ
  Acumulada: 346.48 mJ | Media/paquete: 15.065 mJ
--------------------
Paquete LoRa enviado (24): {"temperature":26.70,"humidity":72.00}
  Airtime: 83.0 ms | I_tx: 55 mA | Energia: 15.064 mJ
  Acumulada: 361.55 mJ | Media/paquete: 15.065 mJ
--------------------
Paquete LoRa enviado (25): {"temperature":26.70,"humidity":72.00}
  Airtime: 83.0 ms | I_tx: 55 mA | Energia: 15.064 mJ
  Acumulada: 376.61 mJ | Media/paquete: 15.065 mJ
--------------------
Paquete LoRa enviado (26): {"temperature":26.70,"humidity":72.00}
  Airtime: 83.0 ms | I_tx: 55 mA | Energia: 15.064 mJ
  Acumulada: 391.68 mJ | Media/paquete: 15.065 mJ
--------------------
Paquete LoRa enviado (27): {"temperature":26.70,"humidity":72.00}
  Airtime: 83.0 ms | I_tx: 55 mA | Energia: 15.064 mJ
  Acumulada: 406.74 mJ | Media/paquete: 15.065 mJ
--------------------
Paquete LoRa enviado (28): {"temperature":26.70,"humidity":72.00}
  Airtime: 83.0 ms | I_tx: 55 mA | Energia: 15.064 mJ
  Acumulada: 421.81 mJ | Media/paquete: 15.065 mJ
--------------------
Paquete LoRa enviado (29): {"temperature":26.70,"humidity":72.00}
  Airtime: 83.0 ms | I_tx: 55 mA | Energia: 15.064 mJ
  Acumulada: 436.87 mJ | Media/paquete: 15.065 mJ


### received:
##### si acerco la placa:
[MQTT] Publicado correctamente
  Recibidos: 66  Invalidos: 0  Publicados: 66
[LoRa RX] {"temperature":26.70,"humidity":72.00}  RSSI=-20 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente
  Recibidos: 67  Invalidos: 0  Publicados: 67
[LoRa RX] {"temperature":26.70,"humidity":72.00}  RSSI=-19 dBm  SNR=10.3 dB
[MQTT] Publicado correctamente
  Recibidos: 68  Invalidos: 0  Publicados: 68
[LoRa RX] {"temperature":26.70,"humidity":72.00}  RSSI=-20 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente
  Recibidos: 69  Invalidos: 0  Publicados: 69
[LoRa RX] {"temperature":26.70,"humidity":72.00}  RSSI=-20 dBm  SNR=10.3 dB
[MQTT] Publicado correctamente
  Recibidos: 70  Invalidos: 0  Publicados: 70
[LoRa RX] {"temperature":26.70,"humidity":72.00}  RSSI=-21 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 71  Invalidos: 0  Publicados: 71
[LoRa RX] {"temperature":26.70,"humidity":72.00}  RSSI=-21 dBm  SNR=10.3 dB
[MQTT] Publicado correctamente
  Recibidos: 72  Invalidos: 0  Publicados: 72
[LoRa RX] {"temperature":26.70,"humidity":72.00}  RSSI=-22 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente
  Recibidos: 73  Invalidos: 0  Publicados: 73
[LoRa RX] {"temperature":26.70,"humidity":72.00}  RSSI=-22 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 74  Invalidos: 0  Publicados: 74
[LoRa RX] {"temperature":26.70,"humidity":72.00}  RSSI=-23 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 75  Invalidos: 0  Publicados: 75
[LoRa RX] {"temperature":26.70,"humidity":72.00}  RSSI=-25 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente

##### si alejo la placa:
LoRa RX] {"temperature":26.70,"humidity":72.00}  RSSI=-49 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 54  Invalidos: 0  Publicados: 54
[LoRa RX] {"temperature":26.70,"humidity":72.00}  RSSI=-45 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 55  Invalidos: 0  Publicados: 55
[LoRa RX] {"temperature":26.70,"humidity":72.00}  RSSI=-46 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente
  Recibidos: 56  Invalidos: 0  Publicados: 56
[LoRa RX] {"temperature":26.70,"humidity":72.00}  RSSI=-48 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 57  Invalidos: 0  Publicados: 57
[LoRa RX] {"temperature":26.70,"humidity":72.00}  RSSI=-48 dBm  SNR=10.3 dB
[MQTT] Publicado correctamente
  Recibidos: 58  Invalidos: 0  Publicados: 58
[LoRa RX] {"temperature":26.70,"humidity":72.00}  RSSI=-49 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 59  Invalidos: 0  Publicados: 59
[LoRa RX] {"temperature":26.70,"humidity":72.00}  RSSI=-51 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente
  Recibidos: 60  Invalidos: 0  Publicados: 60
[LoRa RX] {"temperature":26.70,"humidity":72.00}  RSSI=-57 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 61  Invalidos: 0  Publicados: 61
[LoRa RX] {"temperature":26.70,"humidity":72.00}  RSSI=-42 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 62  Invalidos: 0  Publicados: 62
[LoRa RX] {"temperature":26.70,"humidity":72.00}  RSSI=-38 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 63  Invalidos: 0  Publicados: 63
[LoRa RX] {"temperature":26.70,"humidity":72.00}  RSSI=-40 dBm  SNR=9.8 dB

##### distancia normal:
MQTT] Publicado correctamente
  Recibidos: 8  Invalidos: 0  Publicados: 8
[LoRa RX] {"temperature":26.20,"humidity":72.00}  RSSI=-33 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 9  Invalidos: 0  Publicados: 9
[LoRa RX] {"temperature":26.20,"humidity":72.00}  RSSI=-33 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 10  Invalidos: 0  Publicados: 10
[LoRa RX] {"temperature":26.20,"humidity":72.00}  RSSI=-33 dBm  SNR=9.3 dB
[MQTT] Publicado correctamente
  Recibidos: 11  Invalidos: 0  Publicados: 11
[LoRa RX] {"temperature":26.20,"humidity":72.00}  RSSI=-31 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 12  Invalidos: 0  Publicados: 12
[LoRa RX] {"temperature":26.20,"humidity":72.00}  RSSI=-31 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente
  Recibidos: 13  Invalidos: 0  Publicados: 13
[LoRa RX] {"temperature":26.20,"humidity":72.00}  RSSI=-30 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente
  Recibidos: 14  Invalidos: 0  Publicados: 14
[LoRa RX] {"temperature":26.20,"humidity":72.00}  RSSI=-31 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 15  Invalidos: 0  Publicados: 15
[LoRa RX] {"temperature":26.20,"humidity":72.00}  RSSI=-31 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente
  Recibidos: 16  Invalidos: 0  Publicados: 16
[LoRa RX] {"temperature":26.20,"humidity":72.00}  RSSI=-31 dBm  SNR=10.3 dB
[MQTT] Publicado correctamente
  Recibidos: 17  Invalidos: 0  Publicados: 17
[LoRa RX] {"temperature":26.20,"humidity":72.00}  RSSI=-33 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 18  Invalidos: 0  Publicados: 18
[LoRa RX] {"temperature":26.20,"humidity":72.00}  RSSI=-32 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 19  Invalidos: 0  Publicados: 19
[LoRa RX] {"temperature":26.30,"humidity":72.00}  RSSI=-32 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 20  Invalidos: 0  Publicados: 20
[LoRa RX] {"temperature":26.30,"humidity":72.00}  RSSI=-32 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente

### LORA_TX_POWER = 14 BWD 125;

####  sended:
Paquete LoRa enviado (18): {"temperature":26.70,"humidity":73.00}
  Airtime: 83.0 ms | I_tx: 80 mA | Energia: 21.912 mJ
  Acumulada: 394.42 mJ | Media/paquete: 21.912 mJ
--------------------
Paquete LoRa enviado (19): {"temperature":27.00,"humidity":73.00}
  Airtime: 83.0 ms | I_tx: 80 mA | Energia: 21.912 mJ
  Acumulada: 416.33 mJ | Media/paquete: 21.912 mJ
--------------------
Paquete LoRa enviado (20): {"temperature":27.00,"humidity":73.00}
  Airtime: 83.0 ms | I_tx: 80 mA | Energia: 21.912 mJ
  Acumulada: 438.24 mJ | Media/paquete: 21.912 mJ
--------------------
Paquete LoRa enviado (21): {"temperature":27.10,"humidity":73.00}
  Airtime: 83.0 ms | I_tx: 80 mA | Energia: 21.912 mJ
  Acumulada: 460.15 mJ | Media/paquete: 21.912 mJ
--------------------
Paquete LoRa enviado (22): {"temperature":27.10,"humidity":73.00}
  Airtime: 83.0 ms | I_tx: 80 mA | Energia: 21.912 mJ
  Acumulada: 482.06 mJ | Media/paquete: 21.912 mJ
--------------------
Paquete LoRa enviado (23): {"temperature":27.10,"humidity":73.00}
  Airtime: 83.0 ms | I_tx: 80 mA | Energia: 21.912 mJ
  Acumulada: 503.98 mJ | Media/paquete: 21.912 mJ
--------------------
Paquete LoRa enviado (24): {"temperature":27.10,"humidity":73.00}
  Airtime: 83.0 ms | I_tx: 80 mA | Energia: 21.912 mJ
  Acumulada: 525.89 mJ | Media/paquete: 21.912 mJ
--------------------
Paquete LoRa enviado (25): {"temperature":27.10,"humidity":74.00}
  Airtime: 83.0 ms | I_tx: 80 mA | Energia: 21.912 mJ
  Acumulada: 547.80 mJ | Media/paquete: 21.912 mJ
--------------------
Paquete LoRa enviado (26): {"temperature":27.10,"humidity":74.00}
  Airtime: 83.0 ms | I_tx: 80 mA | Energia: 21.912 mJ
  Acumulada: 569.71 mJ | Media/paquete: 21.912 mJ
--------------------
Paquete LoRa enviado (27): {"temperature":27.10,"humidity":75.00}
  Airtime: 83.0 ms | I_tx: 80 mA | Energia: 21.912 mJ
  Acumulada: 591.62 mJ | Media/paquete: 21.912 mJ

### received:
##### si acerco la placa:
[MQTT] Publicado correctamente
  Recibidos: 44  Invalidos: 4  Publicados: 44
[LoRa RX] {"temperature":28.00,"humidity":78.00}  RSSI=-25 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 45  Invalidos: 4  Publicados: 45
[LoRa RX] {"temperature":28.00,"humidity":78.00}  RSSI=-22 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 46  Invalidos: 4  Publicados: 46
[LoRa RX] {"temperature":28.00,"humidity":77.00}  RSSI=-23 dBm  SNR=9.3 dB
[MQTT] Publicado correctamente
  Recibidos: 47  Invalidos: 4  Publicados: 47
[LoRa RX] {"temperature":28.00,"humidity":77.00}  RSSI=-23 dBm  SNR=9.3 dB
[MQTT] Publicado correctamente
  Recibidos: 48  Invalidos: 4  Publicados: 48
[LoRa RX] {"temperature":28.00,"humidity":77.00}  RSSI=-23 dBm  SNR=9.0 dB

##### si alejo la placa:
[LoRa RX] {"temperature":27.10,"humidity":73.00}  RSSI=-45 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 21  Invalidos: 0  Publicados: 21
[LoRa RX] {"temperature":27.10,"humidity":73.00}  RSSI=-48 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 22  Invalidos: 0  Publicados: 22
[LoRa RX] {"temperature":27.10,"humidity":73.00}  RSSI=-47 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente
  Recibidos: 23  Invalidos: 0  Publicados: 23
[LoRa RX] {"temperature":27.10,"humidity":73.00}  RSSI=-48 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 24  Invalidos: 0  Publicados: 24
[LoRa RX] {"temperature":27.10,"humidity":74.00}  RSSI=-49 dBm  SNR=9.3 dB
[MQTT] Publicado correctamente
  Recibidos: 25  Invalidos: 0  Publicados: 25
[LoRa RX] {"temperature":27.10,"humidity":74.00}  RSSI=-49 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 26  Invalidos: 0  Publicados: 26
[LoRa RX] {"temperature":27.10,"humidity":75.00}  RSSI=-48 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 27  Invalidos: 0  Publicados: 27
[LoRa RX] {"temperature":27.10,"humidity":75.00}  RSSI=-48 dBm  SNR=9.3 dB
[MQTT] Publicado correctamente
  Recibidos: 28  Invalidos: 0  Publicados: 28
[LoRa RX] {"temperature":27.10,"humidity":75.00}  RSSI=-41 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 29  Invalidos: 0  Publicados: 29
[LoRa RX] {"temperature":27.10,"humidity":75.00}  RSSI=-39 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente

##### distancia normal:
[MQTT] Publicado correctamente
  Recibidos: 167  Invalidos: 5  Publicados: 167
[LoRa RX] {"temperature":27.60,"humidity":69.00}  RSSI=-33 dBm  SNR=9.0 dB
[MQTT] Publicado correctamente
  Recibidos: 168  Invalidos: 5  Publicados: 168
[LoRa RX] {"temperature":27.60,"humidity":69.00}  RSSI=-33 dBm  SNR=8.8 dB
[MQTT] Publicado correctamente
  Recibidos: 169  Invalidos: 5  Publicados: 169
[LoRa RX] {"temperature":27.60,"humidity":69.00}  RSSI=-31 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 170  Invalidos: 5  Publicados: 170
[LoRa RX] {"temperature":27.60,"humidity":69.00}  RSSI=-31 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 171  Invalidos: 5  Publicados: 171
[LoRa RX] {"temperature":27.60,"humidity":69.00}  RSSI=-31 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 172  Invalidos: 5  Publicados: 172
[LoRa RX] {"temperature":27.60,"humidity":69.00}  RSSI=-30 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente


## Measuring Quality of Service (QoS) by evaluating packet loss over different distances.

#### LORA_BANDWIDTH = 125. LORA_SPREADING_FACTOR = 7;  LORA_TX_POWER = 10;
### sended:
  Airtime: 93.0 ms | I_tx: 55 mA | Energia: 16.879 mJ
  Acumulada: 860.85 mJ | Media/paquete: 16.880 mJ
--------------------
Paquete LoRa enviado (52): {"seq":52,"temperature":26.20,"humidity":72.00}
  Airtime: 93.0 ms | I_tx: 55 mA | Energia: 16.879 mJ
  Acumulada: 877.73 mJ | Media/paquete: 16.880 mJ
--------------------
Paquete LoRa enviado (53): {"seq":53,"temperature":26.20,"humidity":72.00}
  Airtime: 93.0 ms | I_tx: 55 mA | Energia: 16.879 mJ
  Acumulada: 894.61 mJ | Media/paquete: 16.880 mJ
--------------------
Paquete LoRa enviado (54): {"seq":54,"temperature":26.20,"humidity":72.00}
  Airtime: 93.0 ms | I_tx: 55 mA | Energia: 16.879 mJ
  Acumulada: 911.49 mJ | Media/paquete: 16.880 mJ
--------------------
Paquete LoRa enviado (55): {"seq":55,"temperature":26.20,"humidity":72.00}
  Airtime: 93.0 ms | I_tx: 55 mA | Energia: 16.879 mJ
  Acumulada: 928.37 mJ | Media/paquete: 16.880 mJ
--------------------
Paquete LoRa enviado (56): {"seq":56,"temperature":26.20,"humidity":72.00}
  Airtime: 93.0 ms | I_tx: 55 mA | Energia: 16.879 mJ
  Acumulada: 945.25 mJ | Media/paquete: 16.880 mJ
--------------------
Paquete LoRa enviado (57): {"seq":57,"temperature":26.20,"humidity":72.00}
  Airtime: 93.0 ms | I_tx: 55 mA | Energia: 16.879 mJ
  Acumulada: 962.13 mJ | Media/paquete: 16.880 mJ
--------------------
Paquete LoRa enviado (58): {"seq":58,"temperature":26.20,"humidity":72.00}
  Airtime: 93.0 ms | I_tx: 55 mA | Energia: 16.879 mJ
  Acumulada: 979.01 mJ | Media/paquete: 16.880 mJ
--------------------

### received:

##### si acerco la placa:
MQTT] Publicado correctamente
  Recibidos: 298  Invalidos: 6  Publicados: 298  Perdidos: 14  Perdida: 4.5 %
[LoRa RX] {"seq":10,"temperature":27.10,"humidity":71.00}  RSSI=-23 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente
  Recibidos: 299  Invalidos: 6  Publicados: 299  Perdidos: 14  Perdida: 4.5 %
[LoRa RX] {"seq":11,"temperature":27.10,"humidity":71.00}  RSSI=-23 dBm  SNR=10.3 dB
[MQTT] Publicado correctamente
  Recibidos: 300  Invalidos: 6  Publicados: 300  Perdidos: 14  Perdida: 4.5 %
[LoRa RX] {"seq":12,"temperature":27.10,"humidity":71.00}  RSSI=-24 dBm  SNR=10.5 dB
[MQTT] Publicado correctamente
  Recibidos: 301  Invalidos: 6  Publicados: 301  Perdidos: 14  Perdida: 4.4 %
[LoRa RX] {"seq":13,"temperature":27.10,"humidity":71.00}  RSSI=-24 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 302  Invalidos: 6  Publicados: 302  Perdidos: 14  Perdida: 4.4 %
[LoRa RX] {"seq":14,"temperature":27.10,"humidity":71.00}  RSSI=-25 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente
  Recibidos: 303  Invalidos: 6  Publicados: 303  Perdidos: 14  Perdida: 4.4 %
[LoRa RX] {"seq":15,"temperature":27.10,"humidity":71.00}  RSSI=-26 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente
  Recibidos: 304  Invalidos: 6  Publicados: 304  Perdidos: 14  Perdida: 4.4 %
[LoRa RX] {"seq":16,"temperature":27.10,"humidity":71.00}  RSSI=-27 dBm  SNR=10.3 dB
[MQTT] Publicado correctamente
  Recibidos: 305  Invalidos: 6  Publicados: 305  Perdidos: 14  Perdida: 4.4 %
[LoRa RX] {"seq":17,"temperature":27.10,"humidity":72.00}  RSSI=-27 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente
  Recibidos: 306  Invalidos: 6  Publicados: 306  Perdidos: 14  Perdida: 4.4 %
[LoRa RX] {"seq":18,"temperature":27.10,"humidity":72.00}  RSSI=-28 dBm  SNR=8.8 dB
[MQTT] Publicado correctamente

##### si alejo la placa:

aguantaba bien sin perdidas
MQTT] Publicado correctamente
  Recibidos: 298  Invalidos: 6  Publicados: 298  Perdidos: 14  Perdida: 4.5 %
[LoRa RX] {"seq":10,"temperature":27.10,"humidity":71.00}  RSSI=-23 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente
  Recibidos: 299  Invalidos: 6  Publicados: 299  Perdidos: 14  Perdida: 4.5 %
[LoRa RX] {"seq":11,"temperature":27.10,"humidity":71.00}  RSSI=-23 dBm  SNR=10.3 dB
[MQTT] Publicado correctamente
  Recibidos: 300  Invalidos: 6  Publicados: 300  Perdidos: 14  Perdida: 4.5 %
[LoRa RX] {"seq":12,"temperature":27.10,"humidity":71.00}  RSSI=-24 dBm  SNR=10.5 dB
[MQTT] Publicado correctamente
  Recibidos: 301  Invalidos: 6  Publicados: 301  Perdidos: 14  Perdida: 4.4 %
[LoRa RX] {"seq":13,"temperature":27.10,"humidity":71.00}  RSSI=-24 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 302  Invalidos: 6  Publicados: 302  Perdidos: 14  Perdida: 4.4 %
[LoRa RX] {"seq":14,"temperature":27.10,"humidity":71.00}  RSSI=-25 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente
  Recibidos: 303  Invalidos: 6  Publicados: 303  Perdidos: 14  Perdida: 4.4 %
[LoRa RX] {"seq":15,"temperature":27.10,"humidity":71.00}  RSSI=-26 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente
  Recibidos: 304  Invalidos: 6  Publicados: 304  Perdidos: 14  Perdida: 4.4 %
[LoRa RX] {"seq":16,"temperature":27.10,"humidity":71.00}  RSSI=-27 dBm  SNR=10.3 dB
[MQTT] Publicado correctamente
  Recibidos: 305  Invalidos: 6  Publicados: 305  Perdidos: 14  Perdida: 4.4 %
[LoRa RX] {"seq":17,"temperature":27.10,"humidity":72.00}  RSSI=-27 dBm  SNR=10.0 dB
[MQTT] Publicado correctamente
  Recibidos: 306  Invalidos: 6  Publicados: 306  Perdidos: 14  Perdida: 4.4 %
[LoRa RX] {"seq":18,"temperature":27.10,"humidity":72.00}  RSSI=-28 dBm  SNR=8.8 dB
[MQTT] Publicado correctamente


hemos ido incluso más lejos y ya algun fallo tenia:
[MQTT] Publicado correctamente
  Recibidos: 237  Invalidos: 1  Publicados: 237  Perdidos: 1  Perdida: 0.4 %
[LoRa RX] {"seq":230,"temperature":27.10,"humidity":74.00}  RSSI=-113 dBm  SNR=0.3 dB
[MQTT] Publicado correctamente
  Recibidos: 238  Invalidos: 1  Publicados: 238  Perdidos: 1  Perdida: 0.4 %
[LoRa RX] {"seq":231,"temperature":27.10,"humidity":74.00}  RSSI=-112 dBm  SNR=2.2 dB
[MQTT] Publicado correctamente
  Recibidos: 239  Invalidos: 1  Publicados: 239  Perdidos: 1  Perdida: 0.4 %
[LoRa RX] {"seq":232,"temperature":27.10,"humidity":74.00}  RSSI=-113 dBm  SNR=2.2 dB
[MQTT] Publicado correctamente
  Recibidos: 240  Invalidos: 1  Publicados: 240  Perdidos: 1  Perdida: 0.4 %
[LoRa RX] {"seq":233,"temperature":27.10,"humidity":74.00}  RSSI=-105 dBm  SNR=8.0 dB
[MQTT] Publicado correctamente
  Recibidos: 241  Invalidos: 1  Publicados: 241  Perdidos: 1  Perdida: 0.4 %
[LoRa RX] {"seq":234,"temperature":27.10,"humidity":74.00}  RSSI=-118 dBm  SNR=-2.7 dB
[MQTT] Publicado correctamente
  Recibidos: 242  Invalidos: 1  Publicados: 242  Perdidos: 1  Perdida: 0.4 %
[LoRa RX] {"seq":235,"temperature":27.10,"humidity":74.00}  RSSI=-106 dBm  SNR=7.0 dB
[MQTT] Publicado correctamente
  Recibidos: 243  Invalidos: 1  Publicados: 243  Perdidos: 1  Perdida: 0.4 %
[LoRa RX] {"seq":236,"temperature":27.10,"humidity":74.00}  RSSI=-115 dBm  SNR=-1.0 dB
[MQTT] Publicado correctamente
  Recibidos: 244  Invalidos: 1  Publicados: 244  Perdidos: 1  Perdida: 0.4 %
[LoRa RX] {"seq":237,"temperature":27.10,"humidity":74.00}  RSSI=-114 dBm  SNR=0.0 dB
[MQTT] Publicado correctamente
  Recibidos: 245  Invalidos: 1  Publicados: 245  Perdidos: 1  Perdida: 0.4 %
[LoRa RX] {"seq":238,"temperature":27.10,"humidity":74.00}  RSSI=-112 dBm  SNR=2.7 dB
[MQTT] Publicado correctamente
  Recibidos: 246  Invalidos: 1  Publicados: 246  Perdidos: 1  Perdida: 0.4 %
[LoRa RX] {"seq":239,"temperature":27.10,"humidity":75.00}  RSSI=-110 dBm  SNR=5.0 dB
[MQTT] Publicado correctamente
  Recibidos: 247  Invalidos: 1  Publicados: 247  Perdidos: 1  Perdida: 0.4 %
[LoRa RX] {"seq":240,"temperature":27.10,"humidity":75.00}  RSSI=-108 dBm  SNR=7.0 dB
[MQTT] Publicado correctamente

envolviendo incluos las antenas con papel de aluminio ya tenía más fallos

[MQTT] Publicado correctamente
  Recibidos: 277  Invalidos: 4  Publicados: 277  Perdidos: 11  Perdida: 3.8 %
[LoRa RX] {"seq":280,"temperature":27.60,"humidity":73.00}  RSSI=-120 dBm  SNR=-3.7 dB
[MQTT] Publicado correctamente
  Recibidos: 278  Invalidos: 4  Publicados: 278  Perdidos: 11  Perdida: 3.8 %
[LoRa RX] {"seq":281,"temperature":27.60,"humidity":73.00}  RSSI=-119 dBm  SNR=-3.7 dB
[MQTT] Publicado correctamente
  Recibidos: 279  Invalidos: 4  Publicados: 279  Perdidos: 11  Perdida: 3.8 %
[LoRa RX] {"seq":282,"temperature":27.60,"humidity":73.00}  RSSI=-122 dBm  SNR=-5.5 dB
[MQTT] Publicado correctamente
  Recibidos: 280  Invalidos: 4  Publicados: 280  Perdidos: 11  Perdida: 3.8 %
[LoRa ERR] Lectura fallida, codigo: -7
[LoRa RX] {"seq":284,"temperature":27.60,"humidity":73.00}  RSSI=-100 dBm  SNR=9.3 dB
[MQTT] Publicado correctamente
  Recibidos: 281  Invalidos: 5  Publicados: 281  Perdidos: 12  Perdida: 4.1 %
[LoRa ERR] Lectura fallida, codigo: -7
[LoRa RX] {"seq":286,"temperature":27.60,"humidity":74.00}  RSSI=-81 dBm  SNR=10.3 dB
[MQTT] Publicado correctamente
  Recibidos: 282  Invalidos: 6  Publicados: 282  Perdidos: 13  Perdida: 4.4 %
[LoRa RX] {"seq":287,"temperature":27.60,"humidity":74.00}  RSSI=-81 dBm  SNR=9.5 dB
[MQTT] Publicado correctamente
  Recibidos: 283  Invalidos: 6  Publicados: 283  Perdidos: 13  Perdida: 4.4 %
[LoRa RX] {"seq":288,"temperature":27.60,"humidity":74.00}  RSSI=-80 dBm  SNR=10.3 dB
[MQTT] Publicado correctamente
  Recibidos: 284  Invalidos: 6  Publicados: 284  Perdidos: 13  Perdida: 4.4 %
[LoRa RX] {"seq":289,"temperature":27.60,"humidity":75.00}  RSSI=-79 dBm  SNR=9.8 dB
[MQTT] Publicado correctamente
  Recibidos: 285  Invalidos: 6  Publicados: 285  Perdidos: 13  Perdida: 4.4 %
##### distancia normal: