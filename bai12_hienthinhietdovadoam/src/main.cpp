#include <Arduino.h>
#include <LiquidCrystal.h>
#include "DHT.h"
LiquidCrystal lcd(12, 11, 7, 6, 5, 4);
const int PINDHT = 3;
const int DHTTYPE = DHT11;

DHT dht(PINDHT, DHTTYPE);

void setup()
{
  Serial.begin(9600);
  dht.begin();
  lcd.begin(16, 2);
}
void loop()
{
  float doam = dht.readHumidity();
  float nhietdo = dht.readTemperature();
  lcd.setCursor(0, 0);
  lcd.print("Do am:");
  lcd.setCursor(8, 0);
  lcd.print(doam);
  lcd.setCursor(0, 1);
  lcd.print("Nhiet do:");
  lcd.setCursor(10, 1);
  lcd.print(nhietdo);
}