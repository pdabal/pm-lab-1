#include <Arduino.h>
#define led 8
 #define M_kropka_t 200
  #define M_kreska_t 3*M_kropka_t
  #define M_Pauza_t 3*M_kropka_t
  #define M_spacja_t 7*M_kropka_t
void setup() {
  
  pinMode(8, OUTPUT);
}

void loop() {
 for(int i=0; i<3; i++)
 {
   digitalWrite(led, HIGH);
   delay(M_kropka_t);
   digitalWrite(led, LOW);
   delay(M_Pauza_t);
 }
 int i=0;
while(i<3)
 {
   digitalWrite(led, HIGH);
   delay(M_kreska_t);
   digitalWrite(led, LOW);
   delay(M_Pauza_t);
   i++;
 }
 int j=0;
 do
 {
   digitalWrite(led, HIGH);
   delay(M_kropka_t);
   digitalWrite(led, LOW);
   delay(M_Pauza_t);
   j++;
 }while(j<3);

  delay(M_spacja_t);
}