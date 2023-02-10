#include <Arduino.h>
#include <suma.h>

void setup() {
  Serial.begin(9600);
  Serial.println("");
  Serial.println("Hola2");
  suma suma1(2);
  suma1.numero();
  
  }

void loop() {
  
  }