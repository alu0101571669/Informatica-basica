#include <iostream>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file complejo.h
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 03/12/2023
  * @brief Declaración de la clase Complejo
*/

class Complejo {
  public:
  Complejo(); // Constructor predeterminado de la clase
  Complejo(double, double); // Constructor de la clase Complejo
  Complejo operator+(const Complejo& parte); // Sobrecarga del operador suma
  Complejo operator-(const Complejo& parte); // Sobrecarga del operador resta
  friend ostream& operator<<(ostream& os, Complejo& parte); // Sobrecarga del operador de salida
  friend istream& operator>>(istream& is, Complejo& parte); // Sobrecarga del operador de entrada
  
  private:
  double real_; // Parte real
  double imaginaria_; // Parte imaginaria
};