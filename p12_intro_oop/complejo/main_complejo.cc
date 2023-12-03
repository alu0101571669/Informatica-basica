#include "complejo.h"

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file main_complejo.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 03/12/2023
  * @brief Programa que suma y resta dos números complejos
*/

int main() {
  Complejo num1, num2, resultado;
  // Ingresar 2 números complejos
  cout << "Ingrese el primer número complejo" << endl;
  cin >> num1;
  cout << "Ingrese el segundo número complejo" << endl;
  cin >> num2;

  // Sumar los números complejos
  cout << "--RESULTADOS--" << endl;
  resultado = num1 + num2;
  cout << "La suma de los dos números complejos es: ";
  cout << resultado;
  // Restar los números complejos
  resultado = num1 - num2;
  cout << "La resta de los dos nñumeros complejos es: ";
  cout << resultado;

  return 0;
}