#include <Arduino.h>

uint8_t ledPin[] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
uint8_t ledDelay = 65;
uint8_t direction = 1;
uint8_t currentLED = 0;
unsigned long changeTime;
#define LED_RED 10
#define M_KROPKA_T 200
#define M_KRESKA_T 3 * M_KROPKA_T
#define M_PAUZA_T 3 * M_KROPKA_T
#define M_SPACJA_T 7 * M_KROPKA_T



void setup() {
  pinMode(LED_RED,OUTPUT);
  
}

void loop() {
  for(int i = 0; i<3;i++)
  {
    digitalWrite(LED_RED,HIGH);
    delay(M_KROPKA_T);
    digitalWrite(LED_RED,LOW);
    delay(M_PAUZA_T);
  }
  for(int i = 0; i< 3;i++)
  {
    digitalWrite(LED_RED,HIGH);
    delay(M_KRESKA_T);
    digitalWrite(LED_RED,LOW);
    delay(M_PAUZA_T);
  }
  for(int i =0; i<3; i++)
  {
    digitalWrite(LED_RED,HIGH);
    delay(M_KROPKA_T);
    digitalWrite(LED_RED,LOW);
    delay(M_PAUZA_T);
  }
  delay(M_SPACJA_T);

}

