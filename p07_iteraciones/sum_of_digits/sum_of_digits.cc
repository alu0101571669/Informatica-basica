#include <iostream>
#include <cmath>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file sum_of_digits.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 21/10/2023
  * @brief Programa que suma los dígitos de un número
*/

int main() {
  int numero, digito;
  int suma = 0;
  cin >> numero;
  while(numero != 0) {
    digito = numero % 10;
    suma += digito;
    numero /= 10;
  }
  cout << suma << endl;
  return 0;
}