#include <Arduino.h>

const int LED =4; // pin P4(GPIO4)

void setup(){
  pinMode(LED, OUTPUT);
}

void loop(){
  digitalWrite(LED, HIGH); // ENCIENDE
  delay(500);
  digitalWrite(LED, LOW); //Apagado
  delay(500);
}
