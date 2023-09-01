#include <Arduino.h>

int led = 3;
void setup()
{
  pinMode(led, OUTPUT);
  for (int i = 0; i < 4; i++)
  {
    digitalWrite(led, 1);
    delay(200);
    digitalWrite(led, 0);
    delay(200);
  }
}
void loop()
{
}