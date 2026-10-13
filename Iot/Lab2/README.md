# IoT Lab 2 — Activity 2: LoRa communication with MQTT integration

Same telemetry chain as Lab 1, but the data now crosses a LoRa link before reaching the
broker. The first ESP32 (sensor node) reads the DHT11 and broadcasts the reading over LoRa;
the second ESP32 (gateway) receives it, adds the link quality (RSSI/SNR) and republishes it
over MQTT. From there the stack is unchanged: Telegraf consumes the messages, InfluxDB stores
them and Grafana displays them, all inside Docker.

```
DHT11 ──► ESP32 sender ──LoRa 868 MHz──► ESP32 gateway ──Wi-Fi/MQTT──► Mosquitto
                                                                        │
                                        InfluxDB ◄── Telegraf ◄─────────┘
                                            │
                                          Grafana
```

## Quick start

```bash
docker compose build      # builds the Mosquitto image (other images are pulled)
docker compose up -d      # starts the four services
docker compose ps         # all of them should be Up
```

| Service    | URL / port                 | Credentials                        |
|------------|----------------------------|------------------------------------|
| Mosquitto  | `localhost:1884`           | anonymous access allowed           |
| InfluxDB   | `http://localhost:8087`    | `admin` / `adminpass`, db `lora_db` |
| Grafana    | `http://localhost:3001`    | `admin` / `admin123`               |

The ports and container names are offset with respect to Lab 1 (`1883`, `8086`, `3000`), so
both stacks can run at the same time.

The dashboard **LoRa Weather Station** is provisioned automatically in Grafana, with four
panels: temperature, humidity, RSSI and SNR.

Stop everything with `docker compose down` (add `-v` to delete the stored data as well).

## How the data flows

1. `sketch_lora_sender` reads the DHT11 once per second, validates the values with `isnan()`
   and transmits the JSON payload with `radio.transmit()`:

   ```json
   {"temperature":24.10,"humidity":76.00}
   ```

2. `sketch_lora_receiver` reads the packet with `radio.readData()`, extracts the fields and
   republishes them on `sensor/esp01_lora` with the quality of the radio link:

   ```json
   {"temperature":24.10,"humidity":76.00,"rssi":-71,"snr":7.2}
   ```

3. Telegraf subscribes to `sensor/#` with `data_format = "json"` and `name_override =
   "lora_weather"`, so the measurement keeps a single name and every key of the object becomes
   a field.
4. InfluxDB stores one point per message:

   ```
   lora_weather,host=<container-hostname> temperature=24.1,humidity=76,rssi=-71,snr=7.2 1790785562000000000
   ```

5. Grafana plots the four fields as time series, for example
   `SELECT mean("rssi") FROM "lora_weather" WHERE $timeFilter GROUP BY time($__interval)`.

## Hardware wiring

Both boards are Heltec WiFi LoRa 32 V2 (SX1276). The LoRa transceiver is wired on the board
itself, so only the DHT11 has to be connected:

| Signal | Heltec LoRa 32 V2 pin | Notes |
|--------|-----------------------|-------|
| DHT11 VCC   | `3V3` | never `5V`, the data line of the DHT11 is 3.3 V |
| DHT11 DATA  | `GPIO33` | add a 10 kΩ pull-up to `3V3` if the readings fail |
| DHT11 GND   | `GND` | |

The LoRa SPI bus uses the default VSPI of the ESP32 (`SCK 5`, `MISO 19`, `MOSI 23`), and the
library only needs `CS 18`, `DIO0 26` and `RST 14`, which are already routed on the board.

The gateway also needs Wi-Fi: it is the only board connected to the network.

## Repository layout

| Path | Contents |
|------|----------|
| `docker-compose.yml` | Definition of the four services (Mosquitto, InfluxDB, Telegraf, Grafana), their volumes and ports. This is the entry point of the whole system. |
| `sketch_lora_sender/` | Firmware of the sensor node: DHT11 reading and LoRa transmission. The LoRa settings (`LORA_FREQUENCY`, `LORA_BANDWIDTH`, `LORA_SPREADING_FACTOR`, `LORA_CODING_RATE`, `LORA_SYNC_WORD`, `LORA_TX_POWER`) are at the top of the file. |
| `sketch_lora_receiver/` | Firmware of the gateway: LoRa reception, JSON parsing and MQTT publication, plus the Wi-Fi and MQTT credentials. |
| `experiments/` | `README.md` with the procedure and the result tables for the LoRa parameter experiments (bandwidth, transmission power, packet loss over distance) and `packet_loss.py`, a small MQTT subscriber that measures the end-to-end loss and the mean RSSI/SNR. |
| `mosquitto/` | MQTT broker: `Dockerfile` (based on `eclipse-mosquitto:2.0`) and `config/mosquitto.conf` (listener on 1883, anonymous access, persistence). `data/` and `log/` are the volumes created by the broker. |
| `telegraf/` | `telegraf.conf`: the `mqtt_consumer` input (`topics = ["sensor/#"]`, `data_format = "json"`) and the `influxdb` output. This is where MQTT messages are converted into time-series points. |
| `influxdb/` | Bind-mounted InfluxDB data directory (`meta.db`, `wal/`, `data/`). Runtime data, not source code; it can be deleted to start from an empty database. |
| `grafana/` | `dashboards/lora-weather.json` (dashboard with the four time-series panels), `provisioning/datasources/influxdb.yaml` (InfluxDB datasource with the fixed uid `influxdb-lora`) and `provisioning/dashboards/sample-dashboard.yaml` (dashboard provider that loads the JSON from disk). |
| `data/` | CSV exports of the measurements (`packet_loss.py --csv`), used by the pgfplots figures of the report. |
| `ACTIVITY1_2_CIIOT.pdf` | Statement of the activity. |

## Flashing the firmware

1. Install the libraries from the Arduino IDE library manager: **RadioLib** (jgromes),
   **PubSubClient** (Nick O'Leary) and **DHT sensor library** (Adafruit).
2. Upload `sketch_lora_sender/sketch_lora_sender.ino` to the first board and
   `sketch_lora_receiver/sketch_lora_receiver.ino` to the second one.
3. Edit the constants at the top of each sketch:
   * `WIFI_SSID` / `WIFI_PASSWORD` — credentials of the network the gateway joins.
   * `MQTT_SERVER` — IP of the machine that runs Docker (not `localhost`, since the board
     resolves it on the local network).
   * `LORA_FREQUENCY` — 868 MHz for the European boards, 915 MHz for the American ones.
   * The LoRa parameters must be **identical in both sketches**: they are repeated on purpose
     so that each board can be flashed and tested independently.
4. Upload and watch the Serial monitor (115200 baud). The sender prints the readings and
   confirms every transmission; the gateway prints every packet with its RSSI/SNR and the
   running counters of received, invalid and published packets.


Useful logs:

```bash
docker compose logs -f mosquitto     # broker: connections and messages
docker compose logs -f telegraf      # consumer: parsed metrics and InfluxDB writes
```
