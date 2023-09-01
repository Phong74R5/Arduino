#include <Arduino.h>
int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;

int button1 = 2;
int button2 = 3;
int button3 = 4;
int button4 = 5;

void chedo1()
{
  digitalWrite(led1, 1);
  digitalWrite(led2, 0);
  digitalWrite(led3, 0);
  digitalWrite(led4, 0);
}

void chedo2()
{
  digitalWrite(led1, 0);
  digitalWrite(led2, 1);
  digitalWrite(led3, 0);
  digitalWrite(led4, 0);
}

void chedo3()
{
  digitalWrite(led1, 0);
  digitalWrite(led2, 0);
  digitalWrite(led3, 1);
  digitalWrite(led4, 0);
}

void chedo4()
{
  digitalWrite(led1, 0);
  digitalWrite(led2, 0);
  digitalWrite(led3, 0);
  digitalWrite(led4, 4);
}

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);

  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
}

void loop()
{
  digitalWrite(led1, 0);
  digitalWrite(led2, 0);
  digitalWrite(led3, 0);
  digitalWrite(led4, 0);

  int read1 = digitalRead(button1);
  int read2 = digitalRead(button2);
  int read3 = digitalRead(button3);
  int read4 = digitalRead(button4);
  if (read1 == 1)
  {
    chedo1();
  }
  if (read2 == 1)
  {
    chedo2();
  }
  if (read3 == 1)
  {
    chedo3();
  }
  if (read4 == 1)
  {
    chedo4();
  }
  delay(100);
}

