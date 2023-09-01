#include <Arduino.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 7, 6, 5, 4);
int sersor = 2;
int count = 0;
int pre = 0;

void setup()
{
  lcd.begin(16, 2);
  pinMode(sersor, INPUT);
}

void loop()
{
  int data = digitalRead(sersor);
  if (data == 1 && pre == 0)
  {
    count++;
    // delay(100);
  }
  pre = data;
  lcd.setCursor(0, 0);
  lcd.print("So luong: ");
  lcd.setCursor(11, 0);
  lcd.print(count);
  delay(100);
  
}