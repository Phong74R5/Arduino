#include <Arduino.h>
#include <Servo.h>
int analogLeg = A0;
Servo motorServo;

void setup()
{
  Serial.begin(9600);
  motorServo.attach(3);
}

void loop()
{
  int data = analogRead(analogLeg);
  Serial.println(data);
  int goc = map(data, 0, 1023, 0, 180);
  Serial.println(goc);
  motorServo.write(goc);
}
