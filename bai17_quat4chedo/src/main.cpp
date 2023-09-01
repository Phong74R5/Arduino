#include <Arduino.h>

int led = 9;
int ENA = 8;
int IN1 = 7;
int IN2 = 6;
int button = 2;
int chedo = 0;
int pre = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(button, INPUT);
}

void chedo1()
{
  analogWrite(ENA, 150);
}

void chedo2()
{
  analogWrite(ENA, 200);
}

void chedo3()
{
  analogWrite(ENA, 255);
}

void chedo4()
{
  analogWrite(ENA, 0);
  digitalWrite(led, 1);
}

void loop()
{
  digitalWrite(IN1, 1);
  digitalWrite(IN2, 0);
  int nhan = digitalRead(button);
  if (nhan == 1 && pre == 0)
  {
    chedo = chedo + 1;
    delay(100);
  }
  pre = nhan;
  switch (chedo)
  {
  case 1:
    chedo1();
    break;

  case 2:
    chedo2();
    break;

  case 3:
    chedo3();
    break;

  case 4:
    chedo4();
    break;

  case 5:
    digitalWrite(led, 0);
    chedo = 0;
    break;

  default:
    break;
  }
}
