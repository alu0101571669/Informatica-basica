#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología 
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @file polynomial-evaluation.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 14/11/2022
 * @brief Programa que lee un valor de x y lo sustituye en una ecuación polinomica 
*/

int main() {
  int exponente = 0;
  double valor_de_x, coeficientes, resto = 0;
  std::cin >> valor_de_x;
  while(std::cin >> coeficientes) {
    resto += coeficientes * pow(valor_de_x, exponente);
    exponente++;
  }
  std::cout << std::fixed << std::setprecision(4) << resto << std::endl;
  return 0;
  }
