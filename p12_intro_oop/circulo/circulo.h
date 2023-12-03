#include <iostream>
#include <cmath>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file circulo.h
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 03/12/2023
  * @brief Declaración de la clase Circulo
*/

class Circulo {
  public:
  Circulo(double, double, double); // Constructor de la clase Circulo
  double Area(); // Calcular el área del círculo
  double Perimetro(); // Calcular el perímetro
  void Print(); // Mostrar la información relativa del círculo
  bool EsInterior(double, double); // Comprobar que un punto (x, y) se encuentra dentro del círculo
  
  private: // Atributos privados de la clase
  double centro_x_; 
  double centro_y_;
  double radio_;
};