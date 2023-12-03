#include <iostream>
#include <fstream>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file fecha.h
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 03/12/2023
  * @brief Declaración de la clase Fecha
*/

class Fecha {
  public:
  Fecha(); // Constructor predeterminado
  Fecha(int, int, int); // Constructor de la clase Fecha
  bool IsValidDate(); // Verificar si la fecha es válida
  bool EsBisiesto(); // Comprobar que el año sea bisiesto
  friend istream& operator>>(istream& is, Fecha& date); // Sobrecarga del operador de entrada
  friend ostream& operator<<(ostream& os, Fecha& date); // sobrecarga del operador de salida

  private: // Atributos privados de la clase
  int dia_;
  int mes_;
  int anyo_;
};