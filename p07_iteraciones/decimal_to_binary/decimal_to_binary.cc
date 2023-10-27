#include <iostream>
#include <bitset>

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

void PrintProgramPurpose() {
  cout << "Programa que calcula el binario de un número decimal" << endl;
  cout << "Número: ";
}

/**
 * @brief Calcular el binario de un número decimal
 * @param decimal Número que se va a convertir en binario
*/

void ToBinary(int decimal) {
  int binary = 0;
  int i = 1;
  while (decimal > 0) {
    int resto = decimal % 2; // Calcular el resto
    decimal /= 2;
    if (resto == 1) {
      binary += i;
    }
    i *= 10; // Multiplicar por la base
  }
  cout << binary << endl;
}

int main() {
  int decimal;
  PrintProgramPurpose();
  cin >> decimal;
  ToBinary(decimal);
  return 0;
}