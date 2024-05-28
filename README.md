# Hydrophyte Oxygen Generator

This project employs an Arduino Uno to develop a self-sustaining algae greenhouse designed to convert large amounts of carbon dioxide in the air into oxygen.

<img width="600" alt="Screenshot 2024-05-28 at 08 57 59" src="https://github.com/WillsanAJantho/Hydrophyte-Oxygen-Generator/assets/170993086/dd05b572-d9b9-43b9-833c-f5cefdcb1260">

# Main Components
1. Arduino UNO R3

![398db4406e3faba9a6ecddcf0b1fc484](https://github.com/WillsanAJantho/Hydrophyte-Oxygen-Generator/assets/170993086/d0b14b0d-18a5-4bc4-b290-d74536bc0ee7)

2. DHT 11 sensor

    ![dht11-module-temperature-humidity-sensor-temperatur-kelembaban-for-arduino-with-led-297030](https://github.com/WillsanAJantho/Hydrophyte-Oxygen-Generator/assets/170993086/36caf23f-8f63-409c-8e8c-b8ac82ff6785)
   
4. MQ135 gas sensor

    ![MQ-135-Gas-Sensor-1](https://github.com/WillsanAJantho/Hydrophyte-Oxygen-Generator/assets/170993086/f8d1b788-f894-46ca-b0f1-7c8ea0e6ff69)
   
5. Photo resistor

   ![LDR-](https://github.com/WillsanAJantho/Hydrophyte-Oxygen-Generator/assets/170993086/77f35018-d8fe-4526-b6e2-84b80423fe16)
   
6. Fans

    ![fan](https://github.com/WillsanAJantho/Hydrophyte-Oxygen-Generator/assets/170993086/81e6d385-67d3-4ccc-8f3a-d9e3d22f5848)
   
7. Liquid Crystal Display 16x2

   ![LCD%2016x2](https://github.com/WillsanAJantho/Hydrophyte-Oxygen-Generator/assets/170993086/3f753fcd-b26d-45fb-b996-25609b34c585)
   
8. Acrylic Housing
   
    <img width="700" alt="Screenshot 2024-05-28 at 09 35 58" src="https://github.com/WillsanAJantho/Hydrophyte-Oxygen-Generator/assets/170993086/22a32a5f-4b46-481a-a556-cf8839a703cf">
    
9. Algae plant

    ![Chara_braunii_1](https://github.com/WillsanAJantho/Hydrophyte-Oxygen-Generator/assets/170993086/f0fa8644-55dc-4c2b-b45b-cf44dc5f4c88)
10. Jumper Cable

    ![e40f35e014a80ba44d683f8c27d6533f](https://github.com/WillsanAJantho/Hydrophyte-Oxygen-Generator/assets/170993086/25aa5e17-6e2a-472b-a1c5-c420cfa74182)
   
11. Breadboard

![633b16e1c3d1ed26454cfd33-bb830](https://github.com/WillsanAJantho/Hydrophyte-Oxygen-Generator/assets/170993086/584afb6a-d7e2-441f-8e64-472070c53476)

# Features and the working machanisms
1. Temperature Optimization System: A DHT11 sensor continuously monitors the temperature to keep the algae at its optimal range. If the temperature drops below 20°C, a fan acting as a heater will activate. If the temperature rises above 20°C, another fan functioning as an air conditioner will turn on.
   
2. Lighting System: To support the algae's photosynthesis process, a photoresistor detects the light intensity in the environment. If the light level falls below the minimum required intensity, an LED will turn on to provide additional light.
   
3. Carbon Dioxide Suction System: To ensure the algae receive sufficient carbon dioxide, the system monitors CO2 levels in the greenhouse. If the CO2 concentration is below the required level, two intake fans will turn on. If the concentration is at the desired level, one intake fan will operate. If the concentration exceeds the required level, two intake fans will turn off.
