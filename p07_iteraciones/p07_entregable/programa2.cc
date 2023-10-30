#include <iostream>
#include <cmath>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file programa2.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 30/10/2023
  * @brief Programa que realiza la suma de cuadrados de un número
*/

int main() {
  int numero, cuadrado, suma_de_cuadrados{0};
  cin >> numero;
  for(int it = 1; it <= numero; it++) {
    cuadrado = pow(it, 2);
    suma_de_cuadrados += cuadrado;

  }
  cout << suma_de_cuadrados << endl;
  return 0;
}