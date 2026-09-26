# MQTT Broker and Subscriber using Docker

Instrucciones rápidas para construir y ejecutar el broker Mosquitto y el contenedor `subscriber`.

Construir y levantar los servicios (Mosquitto + InfluxDB + Telegraf + Grafana):

```bash
docker-compose build
docker-compose up -d
```

Ver logs del broker:

```bash
docker-compose logs -f mosquitto
```

Ver logs de Telegraf:

```bash
docker-compose logs -f telegraf
```

Acceder a Grafana en `http://localhost:3000` con usuario `admin` y contraseña `admin123`.

Detener y eliminar:

```bash
docker-compose down
```

La configuración del broker está en `mosquitto/config/mosquitto.conf`.
