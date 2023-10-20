#include <iostream>

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
  * @brief Programa que muestra por pantalla el número mayor de 3 números enteros
*/

int main() {
  int number1, number2, number3;
  int mayor;
  cin >> number1 >> number2 >> number3;
  if(number1 >= number2 && number1 >= number3) {
    mayor = number1;
  }
  if(number2 >= number1 && number2 >= number3) {
    mayor = number2;
  }
  if(number3 >= number1 && number3 >= number2) {
    mayor = number3;
  }
  cout << mayor << endl;
  return 0;
}