# ESP32 Temperature and Humidity Monitor using DHT22 and Blynk

This project is an IoT based Temperature and Humidity monitoring system built using ESP32 and DHT22 sensor.  
The sensor data is sent to the Blynk IoT cloud and displayed on a mobile and web dashboard in real time.

The project demonstrates basic IoT communication using WiFi, sensor reading, and cloud dashboard visualization.

---

## Components Used

- ESP32 Dev Board
- DHT22 Temperature and Humidity Sensor
- Jumper wires
- USB cable
- Blynk IoT Platform
- WiFi connection

---

## Circuit Connection

The circuit is shown in the uploaded image.


### Pin Connections

| DHT22 Pin | ESP32 Pin |
|----------|----------|
| VCC | 3.3V |
| DATA | GPIO 4 |
| GND | GND |

The sensor data pin is connected to GPIO 4 of ESP32.  
Power is supplied using the 3.3V pin of ESP32.

---

## How the Project was Implemented

1. First, the circuit was connected according to the diagram.
2. Then a new template was created in Blynk IoT.
3. Data streams were created for:
   - Temperature
   - Humidity
4. Gauge widgets were added to the Blynk dashboard.
5. The Template ID and Auth Token from Blynk were added in the code.
6. WiFi name and password were added in the program.
7. The code was uploaded to ESP32 using Arduino IDE.
8. After connecting to WiFi, the sensor data started showing on the Blynk dashboard.
9. The values were visible on both mobile app and web dashboard.

---

## Features

- Real time temperature monitoring
- Real time humidity monitoring
- Wireless data transmission
- Cloud dashboard display
- Works on mobile and laptop

---

## Blynk Dashboard

The dashboard shows live temperature and humidity values using gauge widgets.

Files included in this repository:

- Circuit diagram
- Dashboard screenshots
- Dashboard recording
- ESP32 code

---