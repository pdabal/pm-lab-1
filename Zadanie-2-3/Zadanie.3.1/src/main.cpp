#include <Arduino.h>

  uint8_t pin = 13;
  int stan;

void setup() {
  pinMode(pin, OUTPUT);
}

void digitalToggle(uint8_t pin, int stan){
  stan = !stan;
  digitalWrite(pin, stan);
}

void loop() {
  digitalToggle(13, LOW);
}