#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  Serial.println();

  Serial.println("Digite un número: ");
  while (!Serial.available()) {}
  int number = Serial.parseInt();
  Serial.println("Primer número: " + String(number));

  Serial.println("Digite otro número: ");
  while (!Serial.available()) {}
  int OtherNumber = Serial.parseInt();
  Serial.println("Segundo número: " + String(OtherNumber));

  Serial.println("Suma: " + String(number + OtherNumber));
}

void loop() {
  
}