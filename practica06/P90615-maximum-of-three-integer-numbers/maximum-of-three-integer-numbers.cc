#include <iostream>

/*Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología 
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @file maximum-of-three-integer-numbers.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 06/11/2022
 * @brief Programa que te pide 3 numeros y te saca el máximo de esos 3
*/

  int main() {
  int n1, n2, n3, mayor;
  std::cin >> n1 >> n2 >> n3;

  if (n1 >= n2 and n1 >= n3) {
  mayor = n1;
  }
  if(n2 >= n1 and n2 >= n3) {
  mayor = n2;
  }
  if(n3 >= n1 and n3 >= n2) {
  mayor = n3;
  }
  std::cout << mayor << std::endl;
  return 0;
  }


