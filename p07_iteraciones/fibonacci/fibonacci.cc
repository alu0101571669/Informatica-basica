#include <iostream>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file fibonacci.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 21/10/2023
  * @brief Programa que imprime los N números de la serie de Fibonacci
*/

int main() {
  int numero, first, second, suma;
  first = 0; // Primer número de la sucesión de fibonacci
  second = 1; // Segundo número de la sucesión de fibonacci
  cin >> numero;
  for(int it = 0; it < numero; it++) {
    cout << first << " ";
    suma = first + second;
    second = first;
    first = suma;
  }
  cout << endl;
  return 0;
}