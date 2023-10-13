#include <Arduino.h>
#include <BluetoothSerial.h>

BluetoothSerial ComunicacionBT;
char misLetras[5];
int posicion = 0;

void setup() {
  Serial.begin(115200);
  Serial.println();
  ComunicacionBT.begin("MiPlacaNueva"); //Bluetooth device name
  Serial.println("Dispositivo iniciado!");
}

void loop() {
  if (ComunicacionBT.available()) {
    char miLetra = ComunicacionBT.read();
    Serial.println(miLetra);
    if (posicion <= 4) {
      misLetras[posicion] = miLetra;
      Serial.print(misLetras[posicion]);
      posicion++;
    } else if (posicion > 4) {
      posicion = 0;
      misLetras[posicion] = miLetra;
    }

    if (posicion == 4) {
      for (int i = 0; i < 5; i++) {
        Serial.print(misLetras[i]);
      }
      Serial.println();
    }
  }
}