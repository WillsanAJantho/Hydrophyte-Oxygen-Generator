#include <SoftwareSerial.h>
#include <LiquidCrystal.h>

#include "DHT.h"
#define DHTPIN A0
#define DHTTYPE DHT11




int baselineTemp = 0;
int sensorValue = 0;
#include "MQ135.h"
#define ANALOGPIN A2    //  Define Analog PIN on Arduino Board
#define RZERO 370.00   //  Define RZERO Calibration Value
MQ135 gasSensor = MQ135(ANALOGPIN);



DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal lcd(12, 11, 10, 8, 7, 6);

void setup() {
  Serial.begin(9600);
  pinMode(A1, INPUT);
  
  dht.begin(); // initialize the sensor
  lcd.begin(16, 2);

  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(9, OUTPUT);

  float rzero = gasSensor.getRZero();
  delay(3000);
  Serial.print("MQ135 RZERO Calibration Value : ");
  Serial.println(rzero);
}

void loop() {

  // wait a few seconds between measurements.
  delay(2000);

  // read humidity
  float humi  = dht.readHumidity();
  // read temperature as Celsius
  float tempC = dht.readTemperature();
  // read temperature as Fahrenheit
  float tempF = dht.readTemperature(true);

  // check if any reads failed
  if (isnan(humi) || isnan(tempC) || isnan(tempF)) {
    Serial.println("Failed to read from DHT sensor!");
  } else {
    Serial.print("Humidity: ");
    Serial.print(humi);
    Serial.print("%");

    Serial.print("  |  "); 

    Serial.print("Temperature: ");
    Serial.print(tempC);
    Serial.print("°C ~ ");
    Serial.print(tempF);
    Serial.println("°F");

    lcd.setCursor(0,0);
    lcd.print("Temp:");
    lcd.setCursor(0,0);
    lcd.print(tempC);
    lcd.print("C");

 
  }

   baselineTemp = 20;

   if (tempC < baselineTemp) {
    
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
  }
 
  if (tempC >= baselineTemp) {
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
  }
 
  if (tempC >= baselineTemp + 10) {
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);
  }

  //photoresistor
  sensorValue = analogRead(A1);
  
  if (sensorValue < 100) {
   digitalWrite(9, HIGH); 
  }
  
  if (sensorValue > 100) {
    digitalWrite(9, LOW);
  }
  
  delay(100);

  //CO2 Sensor
  float ppm = gasSensor.getPPM();
  delay(1000);
  Serial.print("CO2 ppm value : ");
  Serial.println(ppm);

  if (ppm < 400) {
    digitalWrite(5, HIGH); 
    digitalWrite(2,HIGH);
  }

  if (ppm >= 400){
    digitalWrite(5,HIGH);
    digitalWrite(2,LOW);
  }
  
  if (ppm >= 600) {
    digitalWrite(5, LOW);
    digitalWrite(2,LOW);
  }

  lcd.setCursor(0,1);
  lcd.print("Jumlah CO2: ");
  lcd.setCursor(0,1);
  lcd.print(ppm);
  lcd.print("PPM");
  delay(1000);
  lcd.clear();
  
}