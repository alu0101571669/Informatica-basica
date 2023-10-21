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
  * @brief Programa que convierte un número binario en decimal
*/

int main() {
  int binario, decimal, exponente{0}, save_binario, digito, suma_de_digitos{0};
  cin >> binario;
  save_binario = binario;
  while(save_binario != 0) {
    save_binario /= 10;
    exponente++;
  }
  save_binario = binario;
  for(int it = exponente - 1; it >= 0; it--) {
    digito = save_binario % 10;
    decimal = digito * pow(2, it);
    suma_de_digitos += decimal;
    save_binario /= 10;
  }
  cout << suma_de_digitos << endl;
  return 0;
}