#include <Arduino.h>
int pinPosition = 1;
#define USED_PIN 10
void digitalToogle(uint8_t pin);
void setup() {
  // put your setup code here, to run once:
  pinMode(USED_PIN,OUTPUT);
  }

void loop() {
  // put your main code here, to run repeatedly:
  digitalToogle(USED_PIN);
  delay(500);
}
void digitalToogle(uint8_t pin)
{
  if(pinPosition == 1)
  {
    digitalWrite(pin,LOW);
    pinPosition = 0;
  }
  else
  {
    digitalWrite(pin,HIGH);
    pinPosition = 1;
  }
  
  
}