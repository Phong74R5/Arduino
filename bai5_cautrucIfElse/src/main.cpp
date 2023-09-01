#include <Arduino.h>

int nut1 = 2, nut2 = 3, nut3 = 4;
int led1 = 10, led2 = 11, led3 = 12;

void setup()
{
  pinMode(nut1, INPUT);
  pinMode(nut2, INPUT);
  pinMode(nut3, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}
void loop()
{
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  int read1 = digitalRead(nut1);
  int read2 = digitalRead(nut2);
  int read3 = digitalRead(nut3);
  if (read1 == 1)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    delay(2000);
  }
  else if (read2 == 1)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    delay(2000);
  }
  else if (read3 == 1)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    delay(2000);
  }
}