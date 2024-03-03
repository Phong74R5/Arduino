#include <Arduino.h>
#include <LiquidCrystal.h>
#include "DHT.h"
#include <Servo.h>
Servo vannuoc;
char state;
int doamchuan = 60;
LiquidCrystal lcd(12, 11, 7, 6, 5, 4);
const int PINDHT = 3;
const int DHTTYPE = DHT11;

DHT dht(PINDHT, DHTTYPE);

void setup()
{
  vannuoc.attach(2);
  Serial.begin(9600);
  dht.begin();
  lcd.begin(16, 2);
}
void loop()
{
  if (Serial.available() > 0)
  {
    // doc gia tri nhan duoc tu bluetooh
    state = Serial.read();
  }
  else
  {
    state = 0;
  }
  Serial.print("Do am chuan: ");
  Serial.println(doamchuan);
  switch (state)
  {
  case '+':
    if (doamchuan < 80)
      doamchuan++;
    break;
  case '-':
    if (doamchuan > 20)
      doamchuan--;
    break;
  default:
    break;
  }

  int doam = dht.readHumidity();
  float nhietdo = dht.readTemperature();
  //*hien thi tren LCD
  lcd.setCursor(0, 0);
  lcd.print("Do am:");
  lcd.setCursor(7, 0);
  lcd.print(doam);
  lcd.setCursor(11, 0);
  lcd.print("|");
  lcd.setCursor(12, 0);
  lcd.print(doamchuan);
  lcd.setCursor(0, 1);
  lcd.print("Nhiet do:");
  lcd.setCursor(10, 1);
  lcd.print(nhietdo);
  //*
  //*dieu chinh van nuoc
  int goc = map(doam, 20, doamchuan, 180, 0);
  if (nhietdo >= 32)
  {
    vannuoc.write(0);
  }
  else
  {
    vannuoc.write(goc);
  }
  Serial.print("Goc van nuoc: ");
  Serial.println(goc);
}