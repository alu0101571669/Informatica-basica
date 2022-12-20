#include <iostream>

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @greatest-common-divisor.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 21/11/2022
 * @brief Programa que calcula el máximo común divisor de dos números 
*/

int MaximoComunDivisor(int numero1, int numero2) {
  if(numero2 == 0) return numero1;
  return MaximoComunDivisor(numero2, numero1 % numero2);
}

int main() {
  int numero1, numero2;
  std::cin >> numero1 >> numero2;
  std::cout << "The gcd of " << numero1 << " and " << numero2 << " is " << MaximoComunDivisor(numero1, numero2) << "." << std::endl;
  return 0;
} 
