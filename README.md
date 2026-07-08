# 🌍 IoT-Based Pollution Monitoring System

![Arduino](https://img.shields.io/badge/Arduino-Uno-blue)
![ESP8266](https://img.shields.io/badge/ESP8266-WiFi-green)
![ThingSpeak](https://img.shields.io/badge/ThingSpeak-IoT-orange)
![License](https://img.shields.io/badge/License-MIT-yellow)

## 📌 Project Overview

The **IoT-Based Pollution Monitoring System** is designed to monitor environmental conditions in real time using multiple sensors connected to an Arduino Uno. The system measures air quality, gas concentration, temperature, humidity, and dust levels. The collected data is transmitted to the ThingSpeak cloud platform using the ESP8266 Wi-Fi module, enabling users to monitor environmental conditions remotely.

---

## 🚀 Features

- 🌡️ Real-time Temperature Monitoring
- 💧 Humidity Monitoring
- 🌫️ Air Quality Monitoring using MQ135
- 🔥 Gas Leakage Detection using MQ5
- 🌪️ Dust Level Monitoring
- ☁️ Cloud Data Upload using ThingSpeak
- 📊 Live Data Visualization
- 📡 Wireless IoT Communication

---

## 🛠️ Hardware Components

| Component | Quantity |
|-----------|----------|
| Arduino Uno R3 | 1 |
| ESP8266 Wi-Fi Module | 1 |
| MQ135 Air Quality Sensor | 1 |
| MQ5 Gas Sensor | 1 |
| DHT11 Sensor | 1 |
| Dust Sensor | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |
| USB Cable | 1 |

---

## 💻 Software Used

- Arduino IDE
- ThingSpeak Cloud
- Embedded C
- Windows 10/11

---

## 📊 System Architecture

```
MQ135      MQ5      DHT11      Dust Sensor
   │         │         │             │
   └─────────┴─────────┴─────────────┘
                    │
             Arduino Uno
                    │
             ESP8266 Wi-Fi
                    │
                 Internet
                    │
              ThingSpeak Cloud
                    │
            Live Data Dashboard
```

---

## ⚙️ Working

1. Sensors collect environmental data.
2. Arduino Uno reads all sensor values.
3. ESP8266 connects to the Wi-Fi network.
4. Sensor values are uploaded to ThingSpeak.
5. Users can monitor data remotely through the cloud dashboard.

---

## 📂 Repository Structure

```
IoT-Based-Pollution-Monitoring-System
│
├── Arduino_Code
├── Circuit_Diagram
├── Components
├── Documentation
├── Results
├── README.md
└── LICENSE
```

---

## 📁 Project Files

| Folder | Description |
|--------|-------------|
| Arduino_Code | Arduino source code (.ino) |
| Circuit_Diagram | Circuit and wiring diagrams |
| Documentation | Project report and presentation |
| Components | Components list |
| Results | ThingSpeak graphs and project outputs |

---

## 📈 Results

The system successfully monitors:

- Air Quality
- Gas Concentration
- Temperature
- Humidity
- Dust Levels

The collected sensor data is uploaded to the ThingSpeak cloud platform, where it can be visualized using live graphs for continuous environmental monitoring.

---

## 🔮 Future Enhancements

- Mobile Application Integration
- SMS/Email Alert System
- AI-based Air Quality Prediction
- Solar Powered System
- GPS-based Pollution Mapping

---

## 👩‍💻 Author

**Diya Aggarwal**

B.Tech CSE (Internet of Things)

Vellore Institute of Technology, Vellore

---

## ⭐ If you like this project

Give this repository a ⭐ on GitHub!
