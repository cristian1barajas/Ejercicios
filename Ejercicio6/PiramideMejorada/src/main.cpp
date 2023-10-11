#include <Arduino.h>
#include <Piramide.h>
#include <DataCapture.h>

void setup() {
  Serial.begin(115200);
  Serial.println();

  int altura = DataCapture::captureInteger("Ingrese altura:");
  String simboloUno = DataCapture::captureString("Inserte primer simbolo:");
  String simboloDos = DataCapture::captureString("Inserte segundo simbolo:");

  Piramide piramide1(altura, simboloUno[0], simboloDos[0]);
  piramide1.dibujarPiramide();
}

void loop() {
  
}