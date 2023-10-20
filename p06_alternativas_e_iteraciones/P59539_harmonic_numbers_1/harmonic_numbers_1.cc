#include <iostream>
#include <iomanip>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file maximum_of_three_integer_numbers.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 20/10/2023
  * @brief Programa que calcula el número harmónico
*/

int main() {
  int numero;
  double division, suma;
  cin >> numero;
  for(int it = 1; it <= numero; it++) {
    division = 1.0/it;
    suma += division;
  }
  cout << fixed << setprecision(4) << suma << endl;
  return 0;
}