#include <Arduino.h>
#include <DataCapture.h>

void setup() {
  Serial.begin(9600);
  Serial.println();

  int number = DataCapture::captureInteger("Ingrese primer número:");
  int OtherNumber = DataCapture::captureInteger("Ingrese segundo número:");

  Serial.println("Resultado de la Suma: " + String(number + OtherNumber));
}

void loop() {
  
}