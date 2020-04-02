#include <Arduino.h>

#define LED_RED 10

void setup()
{
  pinMode(LED_RED, OUTPUT);
}

void loop()
{
  digitalWrite(LED_RED, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(LED_RED, LOW);
  delay(500); // Wait for 500 millisecond(s)
}