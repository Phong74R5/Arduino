#include <Arduino.h>

int chanAnalog = A0;
int in1 = 7;
int in2 = 8;
int e = 9;

void setup()
{
  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(e, OUTPUT);
}

void loop()
{
  int read = analogRead(chanAnalog);
  int tocdo = map(read, 0, 1023, -255, 255);
  Serial.print("Toc do: ");
  Serial.println(tocdo);
  if (tocdo < 0)
  {
    digitalWrite(in1, 0);
    digitalWrite(in2, 1);
    analogWrite(e, tocdo * -1);
  }
  else if (tocdo > 0)
  {
    digitalWrite(in1, 1);
    digitalWrite(in2, 0);
    analogWrite(e, tocdo);
  }
}