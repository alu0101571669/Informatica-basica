#include <iostream>
#include <cmath>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file programa3.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 30/10/2023
  * @brief Programa que te pide un número y un exponente y realiza la potencia para esos valores introducidos
*/

int main() {
  int numero, exponente, potencia;
  while (cin >> numero >> exponente) {
    potencia = pow(numero, exponente);
    cout << potencia << endl;
  }
  return 0;
}