# IoT Lab 1 — Activity 1: MQTT communication with ESP32 and server

Telemetry chain for a DHT11 sensor. The ESP32 reads the temperature and the relative
humidity and publishes them as a single JSON message over MQTT; Telegraf consumes the
messages, InfluxDB stores them and Grafana displays them. Every server-side component runs
in Docker, so the whole environment is reproducible with one command.

## Quick start

```bash
docker compose build      # builds the Mosquitto image (other images are pulled)
docker compose up -d      # starts the four services
docker compose ps         # all of them should be Up
```

| Service    | URL / port                | Credentials                  |
|------------|---------------------------|------------------------------|
| Mosquitto  | `localhost:1883`          | anonymous access allowed     |
| InfluxDB   | `http://localhost:8086`   | `admin` / `adminpass`, db `mqttdb` |
| Grafana    | `http://localhost:3000`   | `admin` / `admin123`         |

The dashboard **Temperature and Humidity** is provisioned automatically in Grafana.

Stop everything with `docker compose down` (add `-v` to delete the stored data as well).

## How the data flows

1. The firmware reads the DHT11 once per second and validates the values with `isnan()`.
2. It publishes one message per reading on the topic `sensor/esp01`:

   ```json
   {"temperature":24.10,"humidity":76.00}
   ```

3. Telegraf subscribes to `sensor/#` with `data_format = "json"`, so every key of the JSON
   object becomes a field of the metric, and `name_override` keeps a single measurement name.
4. InfluxDB stores one point per message:

   ```
   mqtt_consumer,host=<container-hostname> temperature=24.1,humidity=76 1790785562000000000
   ```

5. Grafana plots both fields as time series with
   `SELECT mean("temperature") FROM "mqtt_consumer" WHERE $timeFilter GROUP BY time($__interval)`.

## Repository layout

| Path | Contents |
|------|----------|
| `docker-compose.yml` | Definition of the four services (Mosquitto, InfluxDB, Telegraf, Grafana), their volumes and ports. This is the entry point of the whole system. |
| `sketch_sep22b/` | ESP32 firmware. `allcode.ino` is the final version (DHT11 reading + MQTT publish). `connect_wifi.ino` and `detect_temperature.ino` are earlier, commented-out iterations kept for reference. |
| `mosquitto/` | MQTT broker: `Dockerfile` (based on `eclipse-mosquitto:2.0`) and `config/mosquitto.conf` (listener on 1883, anonymous access, persistence). `data/` and `log/` are the volumes created by the broker. |
| `telegraf/` | `telegraf.conf`: the `mqtt_consumer` input (`topics = ["sensor/#"]`, `data_format = "json"`) and the `influxdb` output. This is where MQTT messages are converted into time-series points. |
| `influxdb/` | Bind-mounted InfluxDB data directory (`meta.db`, `wal/`, `data/`). Runtime data, not source code; it can be deleted to start from an empty database. |
| `grafana/` | `dashboards/temperature-humidity.json` (the dashboard with the two time-series panels), `provisioning/datasources/influxdb.yaml` (InfluxDB datasource) and `provisioning/dashboards/sample-dashboard.yaml` (dashboard provider that loads the JSON from disk). |
| `data/sensor.csv` | Measurements of the last ten minutes, aggregated in one-minute buckets, exported from InfluxDB. Used by the report to draw the two figures. |
| `main.tex` / `main.pdf` | LaTeX source and compiled report of the activity. The two pgfplots figures read `data/sensor.csv`; the other two figures are the Grafana screenshots `image_temperature.png` and `image_humidity.png`. |
| `ACTIVITY1_2_CIIOT.pdf` | Statement of the activity. |

## Flashing the firmware

1. Open `sketch_sep22b/allcode.ino` in the Arduino IDE.
2. Install the libraries `PubSubClient` and `DHT.h`.
3. Edit the constants at the top of the file:
   * `WIFI_SSID` / `WIFI_PASSWORD` — credentials of the network the ESP32 joins.
   * `MQTT_SERVER` — IP of the machine that runs Docker (not `localhost`, since the board
     resolves it on the local network).
4. Upload the sketch and watch the Serial monitor (115200 baud): it prints the DHT11 readings
   and confirms each MQTT publication.

Useful logs:

```bash
docker compose logs -f mosquitto     # broker: connections and messages
docker compose logs -f telegraf      # consumer: parsed metrics and InfluxDB writes
```
