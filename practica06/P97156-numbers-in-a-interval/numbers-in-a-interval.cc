#include <iostream>
/*Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología 
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @file numbers-in-a-interval.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 06/11/2022
 * @brief Programa que te pide dos numeros y te saca el intervalo de x numero a x numero (ejemplo: 1,2,3,4,5,6)
*/

  int main() {
  int numero1, numero2;

  std::cin >> numero1 >> numero2;
  if(numero1 < numero2) {
  std::cout << numero1;
  }
  int numero3;
  for(numero3 = numero1 + 1; numero3 <= numero2; numero3++) { 
  std::cout << "," << numero3;
  }
  if(numero1 == numero2) {
  std::cout << numero1;
  }
  std::cout << std::endl;
  return 0;
  }
