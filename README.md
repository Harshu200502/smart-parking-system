# Smart Parking System (ESP32 + Wokwi + IoT)

An IoT-based Smart Parking System built using ESP32 and simulated on Wokwi.  
The system detects parking slot occupancy using sensors and displays real-time availability.

---

## Tech Stack
- ESP32 (MicroPython / Arduino)
- HC-SR04 Ultrasonic Sensor
- WiFi (Wokwi-GUEST / Mobile Hotspot)
- ThingSpeak / Firebase (optional)
- Wokwi Simulator

---

## Features
- Real-time parking slot detection
- IoT-based monitoring
- Cloud data logging (optional)
- LED / buzzer indicators
- Simulation-ready in Wokwi

---

## System Architecture
Sensor → ESP32 → Processing Logic → Cloud (optional) → Dashboard

---

## Wokwi 
- ESP32 DevKit
- Ultrasonic Sensors (HC-SR04)
- Servo motor (optional gate)
- LEDs (Red/Green indicators)
- Buzzer (alert system)

---

## How to Run (Wokwi)

1. Open Wokwi project
2. Import `diagram.json`
3. Paste `main.py` / `main.ino`
4. Run simulation
5. Observe slot status in real time

---

## Future Improvements
- Firebase real-time dashboard
- Mobile app integration
- QR-based parking entry system
- AI-based slot prediction

---

## Project Structure
See `/src` and `/hardware` folders for implementation details.

---

## 🧪 Live Simulation (Wokwi)
Run the project online here:  
https://wokwi.com/projects/your-project-id

---

## Author
Harshitha M
IoT + Data Analytics Enthusiast
