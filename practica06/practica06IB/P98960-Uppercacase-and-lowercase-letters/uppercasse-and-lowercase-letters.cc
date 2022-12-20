#include <iostream>

/*Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología 
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @file uppercase-and-lowercase-letters.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 07/11/2022
 * @brief Programa que te pide una letra (minuscula o mayuscula) y te saca la inversa 
*/

  int main() {
  char letra;
  std::cin >> letra;
  //valor de n
  int n = int(char(letra));

  if(n < 97) {
  std::cout << char(int(n + 32)) << std::endl;
  }

  if(n >= 97) {
  std::cout << char(int(n - 32)) << std::endl;
  }
  return 0;
  }
