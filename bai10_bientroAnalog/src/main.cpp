#include <Arduino.h>
int analogLeg = A0;
int led1 = 8, led2 = 9, led3 = 10, led4 = 11;

void setup()
{
  
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
}
void loop()
{
  int readPOT = analogRead(analogLeg);
  
 
  int read = map(readPOT,0,1023,0,100);
  Serial.print("Nhiet do la: ");
  Serial.println(read);

  if (read < 30)
  {
    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
    digitalWrite(led4, 0);
  }
  else if (read >= 30 && read <= 50)
  {
    digitalWrite(led1, 1);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
    digitalWrite(led4, 0);
  }
  else if (read >= 51 && read <= 60)
  {
    digitalWrite(led1, 0);
    digitalWrite(led2, 1);
    digitalWrite(led3, 0);
    digitalWrite(led4, 0);
  }
  else if (read >= 61 && read <= 80)
  {
    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    digitalWrite(led3, 1);
    digitalWrite(led4, 0);
  }
  else if (read >= 81 && read <= 100)
  {
    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
    digitalWrite(led4, 1);
  }
}