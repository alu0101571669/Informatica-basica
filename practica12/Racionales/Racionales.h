#include <iostream>
#include <cmath>
#include <fstream>

class Racionales {
  public:
  Racionales(int numerador, int denominador);
  void Suma(Racionales racional1, Racionales racional2);
  void Resta(Racionales racional1, Racionales racional2);
  void Multiplicacion(Racionales racional1, Racionales racional2);
  void Division(Racionales racional1, Racionales racional2);

  private:
    int _numerador;
    int _denominador;
};