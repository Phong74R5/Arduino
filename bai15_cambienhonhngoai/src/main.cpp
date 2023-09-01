#include <Arduino.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 7, 6, 5, 4);
int sersor = 2;

void setup()
{
  lcd.begin(16, 2);
  pinMode(sersor, INPUT);
}
void loop()
{

  if (digitalRead(sersor) == 1)
  {
    lcd.setCursor(0, 0);
    lcd.print("DA PHAT HIEN    ");
  }
  else
  {
    lcd.setCursor(0, 0);
    lcd.print("KHONG PHAT HIEN");
  }
}