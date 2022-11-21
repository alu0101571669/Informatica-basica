#include <iostream>

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @sum-of-squares.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 21/11/2022
 * @brief Programa que suma los cuadrados de un número
*/

int SumaDeCuadrados(const int numero) {
  int suma = 0;
  for(int i = 0; i <= numero; i++) {
    suma = suma + (i * i); 
  }
  return suma;
}

int main() {
  int numero;
  std::cin >> numero;
  std::cout << SumaDeCuadrados(numero) << std::endl;
  return 0;
}
