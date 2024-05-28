# Hydrophyte Oxygen Generator

This project employs an Arduino Uno to develop a self-sustaining algae greenhouse designed to convert large amounts of carbon dioxide in the air into oxygen.

<img width="600" alt="Screenshot 2024-05-28 at 08 57 59" src="https://github.com/WillsanAJantho/Hydrophyte-Oxygen-Generator/assets/170993086/dd05b572-d9b9-43b9-833c-f5cefdcb1260">

# Main Components
1. Arduino UNO R3
2. DHT 11 sensor   
4. MQ135 gas sensor
5. Photo resistor
6. Fans
7. Liquid Crystal Display 16x2
8. Acrylic Housing
9. Algae plant
10. Jumper Cable
11. Breadboard

# Features and the working machanisms
1. Temperature Optimization System: A DHT11 sensor continuously monitors the temperature to keep the algae at its optimal range. If the temperature drops below 20°C, a fan acting as a heater will activate. If the temperature rises above 20°C, another fan functioning as an air conditioner will turn on.
   
2. Lighting System: To support the algae's photosynthesis process, a photoresistor detects the light intensity in the environment. If the light level falls below the minimum required intensity, an LED will turn on to provide additional light.
   
3. Carbon Dioxide Suction System: To ensure the algae receive sufficient carbon dioxide, the system monitors CO2 levels in the greenhouse. If the CO2 concentration is below the required level, two intake fans will turn on. If the concentration is at the desired level, one intake fan will operate. If the concentration exceeds the required level, two intake fans will turn off.
