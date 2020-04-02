#include <Arduino.h>

uint8_t ledPin[] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
uint8_t ledDelay = 65;
uint8_t direction = 1;
uint8_t currentLED = 0;
unsigned long changeTime;
void changeLED();

void setup() {
  pinMode(10,OUTPUT);
  
}

void loop() {
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(500);

}

