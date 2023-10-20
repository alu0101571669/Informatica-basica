#include <iostream>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file numbers_in_an_interval.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 20/10/2023
  * @brief Programa que imprime números dentro de un intervalo
*/

int main() {
  int number1, number2;
  cin >> number1 >> number2;
  if(number1 > number2) {
    exit(EXIT_SUCCESS);
  }
  for(int it = number1; it <= number2 -1; it++) {
    cout << it << ",";
  }
  cout << number2;
  cout << endl;
  return 0;
}