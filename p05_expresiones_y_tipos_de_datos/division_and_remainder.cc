#include <iostream>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file division_and_remainder.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 12/10/2023
  * @brief Programa que divide dos números naturales y muestra el cociente y el resto de dicha división
*/

int main() {
  int dividendo, divisor;
  cin >> dividendo >> divisor;
  cout << dividendo / divisor << " " << dividendo % divisor << endl;

  return 0;
}