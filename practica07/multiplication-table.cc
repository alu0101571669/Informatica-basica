#include <iostream>

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología 
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @file multiplication-table.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 11/11/2022
 * @brief Programa que te pide un numero y te dice la tabla de multiplicar de dicho número 
*/

int main() {
  int numero_para_multiplicar;
  std::cin >> numero_para_multiplicar;

  int multiplicador, multiplicacion;
  for(multiplicador = 1; multiplicador <=10; multiplicador++) {
    multiplicacion = numero_para_multiplicar * multiplicador;
    std::cout << numero_para_multiplicar << "*" << multiplicador << " = " << multiplicacion << std::endl;
  }
  return 0;
  }
