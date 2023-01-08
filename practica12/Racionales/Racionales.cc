#include <iostream>
#include <cmath>
#include <fstream>

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @Racionales.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 06/01/2023
 * @brief Programa que opera con números racionales 
*/

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

Racionales::Racionales(int numerador, int denominador) {
  _numerador = numerador;
  _denominador = denominador;
}

void Racionales::Suma(Racionales Racional1, Racionales Racional2) { ///Suma de racionales
  int numerador = Racional1._numerador * Racional2._denominador + Racional2._numerador * Racional1._denominador;
  int denominador = Racional1._denominador * Racional2._denominador;
  std::cout << "La suma de los racionales es: " << numerador << "/" << denominador << std::endl;
}
void Racionales::Resta(Racionales Racional1, Racionales Racional2) { ///Resta de racionales
  int numerador = Racional1._numerador * Racional2._denominador - Racional2._numerador * Racional1._denominador;
  int denominador = Racional1._denominador * Racional2._denominador;
  std::cout << "La resta de los racionales es: " << numerador << "/" << denominador << std::endl;
}
void Racionales::Multiplicacion(Racionales Racional1, Racionales Racional2) { ///Multiplicación de racionales 
  int numerador = Racional1._numerador * Racional2._numerador;
  int denominador = Racional1._denominador * Racional2._denominador;
  std::cout << "La multiplicación de los racionales es: " << numerador << "/" << denominador << std::endl;
}
void Racionales::Division(Racionales Racional1, Racionales Racional2) { ///División de racionales 
  int numerador = Racional1._numerador * Racional2._denominador;
  int denominador = Racional1._denominador * Racional2._numerador;
  std::cout << "La división de rcionales es: " << numerador << "/" << denominador << std::endl;
}

int main() {
  Racionales racional1(1, 2);
  Racionales racional2(1, 3);
  Racionales racional3(0, 0);
  racional3.Suma(racional1, racional2);
  racional3.Resta(racional1, racional2);
  racional3.Multiplicacion(racional1, racional2);
  racional3.Division(racional1, racional2);
  return 0;
}