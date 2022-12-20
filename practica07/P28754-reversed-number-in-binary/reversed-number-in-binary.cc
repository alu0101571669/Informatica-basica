#include <iostream>

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología 
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @file reversed-number-in-binary.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 13/11/2022
 * @brief Programa que transforma un número en binario
*/

int main() {
  int numero;
  std::cin >> numero;
  if(numero == 0) {
    std::cout << 0 << std::endl;
  }
  else {
      while(numero > 0) {
        int resto = numero % 2;
        numero = numero / 2;
        std::cout << resto;
      }
  std::cout << std::endl;
  }
  return 0;
  }
