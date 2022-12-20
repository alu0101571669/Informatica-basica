#include <iostream>

/*Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología 
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @file sum-of-squares.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 10/11/2022
 * @brief Programa que te pide un número y te suma los cuadrados de ese número
*/

int main() {
  int numero;
  std::cin >> numero;

  int suma = 0, cuadrado;
  for(int constante = 1; constante <= numero; constante++) {
    cuadrado = constante * constante;
    suma = suma + cuadrado;
  }
  std::cout << suma << std::endl; 
  return 0;
  }
