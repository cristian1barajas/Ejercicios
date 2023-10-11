class Piramide:
    def __init__(self, primerCaracter, segundoCaracter, altura, limitePrimerCaracter, limiteSegundoCaracter):
        self.primerCaracter = primerCaracter
        self.segundoCaracter = segundoCaracter
        self.altura = altura
        self.limitePrimerCaracter = limitePrimerCaracter
        self.limiteSegundoCaracter = limiteSegundoCaracter

    def dibujarPiramide(self):
        for j in range(self.altura):
            for i in range(self.limitePrimerCaracter):
                print(self.primerCaracter, end="")
            for z in range(self.limiteSegundoCaracter):
                print(self.segundoCaracter, end="")
            print()  # Salto de línea al final de cada fila
            self.limitePrimerCaracter -= 1
            self.limiteSegundoCaracter += 1