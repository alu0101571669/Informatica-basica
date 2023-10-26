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

void PrintProgramPurpose() {
  cout << "Programa que suma los digitos de un número entero" << endl;
  cout << "Número? ";
}

/**
 * @brief Calcular la suma de los digitos del nñumero
 * @param numero Número para sumarle los digitos
 * @return Suma de los dígitos
*/

int SumOfDigits(int numero) {
  int suma{0};
  int digito;
  while (numero != 0) {
    digito = numero % 10;
    suma += digito;
    numero /= 10;
  }
  return suma;
}

int main() {
  int numero;
  PrintProgramPurpose();
  cin >> numero;
  int suma = SumOfDigits(numero);
  cout << "Resultado: " << suma << endl;
  return 0;
}