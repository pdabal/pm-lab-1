#include <Arduino.h>
#define pin 8
bool stan=1; 
 void digitalTogglle(uint8_t x );


void setup() {
 pinMode(pin, OUTPUT);
 digitalWrite(pin, stan);
}

void loop() {
   
  digitalTogglle(pin);
  delay(1000);
  digitalTogglle(pin);
 delay(1000);
}


void digitalTogglle(uint8_t x){
stan=!stan;
digitalWrite(x, stan) ;
}

