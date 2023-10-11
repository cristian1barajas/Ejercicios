#include <Arduino.h>
#include <DataCapture.h>

void setup() {
  Serial.begin(115200);
  Serial.println();

  float notaPrimerCorte = DataCapture::captureFloat("Ingrese nota de primer corte:");
  float notaSegundoCorte = DataCapture::captureFloat("Ingrese nota de segundo corte:");
  float notaTercerCorte = DataCapture::captureFloat("Ingrese nota de tercer corte:");

  Serial.println("Nota definitiva: " + String((notaPrimerCorte * 0.3) + (notaSegundoCorte * 0.3) + (notaTercerCorte * 0.4)));
}

void loop() {
  
}