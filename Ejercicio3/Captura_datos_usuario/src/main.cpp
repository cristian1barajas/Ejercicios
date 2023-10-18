#include <Arduino.h>
#include <DataCapture.h>

using namespace DataCapture;

void setup() {
  Serial.begin(9600);
  Serial.println();

  int number = captureInteger("Ingrese primer número:");
  int OtherNumber = captureInteger("Ingrese segundo número:");

  Serial.println("Resultado de la Suma: " + String(number + OtherNumber));

  String message = DataCapture::captureString("Ingrese una palabra:");
  Serial.println("Mensaje: " + message);
}

void loop() {
  
}