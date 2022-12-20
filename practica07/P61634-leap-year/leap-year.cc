#include <iostream>

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología 
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @file leap-year.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 13/11/2022
 * @brief Programa que te indica si el año es bisiesto o no
*/

int main() {
  int anyo;
  std::cin >> anyo;
  if(anyo % 4 == 0 and anyo % 100 != 0 or anyo % 400 == 0) {
    std::cout << "YES" << std::endl;
  }
  else {
    std::cout << "NO" << std::endl;
  }
  return 0;
  }
