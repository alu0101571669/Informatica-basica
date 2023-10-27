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

void PrintProgramPurpose() {
  cout << "Programa para calcular el número decimal de un binario" << endl;
  cout << "Binario: ";
}

/**
 * @brief Comprobar que un número sea binario
 * @param binario Número binario a comprobar
 * @return true en caso de que sea cierto y false en caso de falso
*/

bool IsBinary(int binario) {
  while (binario > 0) {
    if(binario % 10 > 1) {
      return false;
    }
    binario /= 10;
  }
  return true;
}

/**
 * @brief Calcular el número decimal correpondiente al binario
 * @param binario Binario a convertir en decimal
 * @return Número decimal
*/

int ToDecimal(int binario) {
  int decimal = 0;
  int temp = binario;
  while (temp > 0) {
    int ultimo_digito = temp % 10;
    temp /= 10;
    decimal += ultimo_digito * pow(2, temp);
  }
  return decimal;
}

int main() {
  PrintProgramPurpose();
  int binario, decimal;
  cin >> binario;
  decimal = ToDecimal(binario);
  if(IsBinary(binario)) {
    cout << decimal << endl;
  }
  else {
    cout << "Wrong Imput" << endl;
  }
  return 0;
}