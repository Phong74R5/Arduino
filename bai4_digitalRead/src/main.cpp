#include <Arduino.h>

int led = 10;
int button = 3;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{
  int readButton = digitalRead(button);
  if (readButton == 1)
  {
    digitalWrite(led, 1);
    delay(2000);
    digitalWrite(led, 0);
  }
}
