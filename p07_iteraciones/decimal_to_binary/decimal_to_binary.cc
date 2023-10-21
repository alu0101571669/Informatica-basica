#include <iostream>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file decimal_to_binary.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 21/10/2023
  * @brief Programa que convierte un número decimal en binario
*/

int main() {
  int decimal, cociente, resto;
  cin >> decimal;

  while(decimal > 0) {
    resto = decimal % 2;
    cociente = decimal / 2;
    cout << resto;
    decimal = cociente;
  }
  
  cout << endl;
  return 0;
}