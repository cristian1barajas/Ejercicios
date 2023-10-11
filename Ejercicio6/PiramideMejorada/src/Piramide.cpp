#include <Piramide.h>

Piramide::Piramide(int _altura, char _simboloUno, char _simboloDos) {
    altura = _altura;
    simboloUno = _simboloUno;
    simboloDos = _simboloDos;
}

void Piramide::dibujarPiramide() {
    int limiteSimboloUno = altura;
    int limiteSimboloDos = 0;
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < limiteSimboloUno; j++) {
            Serial.print(simboloUno);
        }
        for (int z = 0; z < limiteSimboloDos; z++) {
            Serial.print(simboloDos);
        }
        Serial.println();
        limiteSimboloUno--;
        limiteSimboloDos++;
    }
}