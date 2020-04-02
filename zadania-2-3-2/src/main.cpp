#include <Arduino.h>
uint8_t ledPin[]={4,5,6,7,8,9,10,11,12,13};
uint8_t ledDelay =65;
uint8_t directrion = 1;
uint8_t currentLED =0;
unsigned long changetime;

void changeLED();

void setup() {
  
  for (int i=0; i<10; i++ )
    {pinMode(ledPin[i], OUTPUT);}
}

void loop() {
 if ((millis()- changetime) > ledDelay)
 {
   changeLED();
   changetime =millis();
 }
 
}

void changeLED(){
  for (int i=0; i<10; i++ ){
    digitalWrite(ledPin[i], LOW);
  }
  digitalWrite(ledPin[currentLED], HIGH);
  currentLED += directrion;
  if (currentLED == 9){
    directrion=-1;
  }
  if (currentLED == 0){
    directrion=1;
  }
}

