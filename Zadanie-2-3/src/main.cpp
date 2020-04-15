

#include <Arduino.h>

#define LED_RED 10

//Sposob kodowania
#define M_KROPKA_T 200
#define M_KRESKA_T 3 * M_KROPKA_T
#define M_PAUZA_T 3 * M_KROPKA_T
#define M_SPACJA_T 7 * M_KROPKA_T


void changeLED();

void setup() {
  
  pinMode(LED_RED, OUTPUT);
  
}

void loop() {
 
  for (int i = 0; i < 3; i++) //Wysylanie znaku 'S'

  {
    digitalWrite(LED_RED, HIGH);
    delay(M_KROPKA_T);
    digitalWrite(LED_RED, LOW);
    delay(M_PAUZA_T);
  }

  for (int i = 0; i < 3; i++)  //wysylanie znaku '0'
  {
    digitalWrite(LED_RED, HIGH);
    delay(M_KRESKA_T);
    digitalWrite(LED_RED, LOW);
    delay(M_PAUZA_T);

  }
  for (int i = 0; i < 3; i++)  //wysylanie znaku 'S'
  {
    digitalWrite(LED_RED, HIGH);
    delay(M_KROPKA_T);
    digitalWrite(LED_RED, LOW);
    delay(M_PAUZA_T);

  }

  delay(M_SPACJA_T);
  

}



