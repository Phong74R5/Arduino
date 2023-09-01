#include <Arduino.h>

int led[] = {2, 3, 4, 5, 6, 7, 8, 9};
void sangdan();
void tatdan();
void setup()
{
  for (int i = 0; i < 8; i++)
  {
    pinMode(led[i], OUTPUT);
  }
}
void loop()
{
  sangdan();
  tatdan();
}
void sangdan()
{
  for (int i = 0; i < 8; i++)
  {
    digitalWrite(led[i], 1);
    delay(1000);
  }
}
void tatdan()
{
  for (int i = 0; i < 8; i++)
  {
    digitalWrite(led[i], 0);
    delay(500);
  }
}