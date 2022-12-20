#include <iostream>

/*Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología 
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @file uppercase-and-lowercase-letters.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 06/11/2022
 * @brief Programa que te pide una letra (ya sea mayuscula o minuscula) y te devuelve la inversa 
*/

  int main() {
  char letra;
  std::cin >> letra;

  //valor de n
  int n = int(char(letra));
  //letra de mayuscula a minuscula
  if(n < 97) {
  std::cout << char(int(n + 32)) << std::endl;
  }
  //letra de minuscula a mayuscula 
  if(n >= 97) {
  std::cout << char(int(n - 32)) << std::endl;
  }
  return 0;
  }
