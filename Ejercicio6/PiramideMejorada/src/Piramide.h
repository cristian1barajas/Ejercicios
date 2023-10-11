#include <Arduino.h>

class Piramide
{
private:
    int altura;
    char simboloUno;
    char simboloDos;
public:
    Piramide(int _altura, char simboloUno, char simboloDos);
    void dibujarPiramide();
};