#include <Arduino.h>
#include "LiquidCrystal.h"

LiquidCrystal lcd(12, 11, 7, 6, 5, 4);
int analogLeg = A0;

void setup()
{
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop()
{
  double dataAnalog = analogRead(analogLeg);
  double temperature = map(dataAnalog,0,1023,0,100);
  lcd.setCursor(0, 0);
  lcd.print("analog:");
  lcd.setCursor(8,0);
  lcd.print(dataAnalog);
  lcd.setCursor(0,1);
  lcd.print("Nhiet do:");
  lcd.setCursor(10,1);
  lcd.print(temperature);
}