#include <Arduino.h>
#include <Servo.h>

Servo xoay;
void setup()
{
  xoay.attach(3);
}

void loop()
{
  xoay.write(0);
  delay(5000);
  xoay.write(180);
  delay(5000);
  xoay.write(90);
  delay(5000);
  xoay.write(0);
  delay(5000);
  xoay.write(90);
  delay(5000);
}