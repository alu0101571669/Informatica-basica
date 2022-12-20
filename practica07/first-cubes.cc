#include <iostream>

/*Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología 
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @file first-cubes.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 11/11/2022
 * @brief Programa que te pide un numero y te suelta los x primeros cubos 
*/

int main() {
  int numero;
  std::cin >> numero;
  std::cout << 0;

  int numero_cubo, multiplicacion_cubos;
  for(numero_cubo = 1; numero_cubo <= numero; numero_cubo++) {
    multiplicacion_cubos = numero_cubo * numero_cubo * numero_cubo;
    std::cout << "," << multiplicacion_cubos;
  }
  std::cout << std::endl;
  return 0;
  }
