#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;
#define EPSILON 1e-6

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file racional.h
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 11/12/2023
  * @brief Declaración de la clase Racional
*/

class Racional {
  public:
  Racional(); // Constructor por defecto
  Racional(int, int); // Constructor de la clase Racional
  // Sobrecarga de operadores para las operaciones
  Racional operator+(const Racional& r);
  Racional operator-(const Racional& r);
  Racional operator*(const Racional& r);
  Racional operator/(const Racional& r);

  // Función para calcular el valor del número racional
  const double Value() const;

  // Comparaciones
  bool operator=(const Racional& r);
  bool operator>(const Racional& r);
  bool operator<(const Racional& r);
  
  // Sobrecarga de operadores de entrada y salida
  friend ostream& operator<<(ostream& os, Racional& r);
  friend istream& operator>>(istream& is, Racional& r);
  private:
  int numerador_;
  int denominador_;
};