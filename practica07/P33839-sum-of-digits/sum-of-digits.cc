#include <iostream>

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología 
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @file sum-of-digits.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 12/11/2022
 * @brief Programa que te suma los digitos de un número
*/

void suma_de_digitos(int numero, int suma) {
  std::cout << "The sum of the digits of " << numero << " is ";
  while(numero > 0) {
    suma = suma + numero % 10;
    numero = numero / 10;
 }
  std::cout << suma << "."<< std::endl;
 }
int main() {
  int numero;
  int suma{0};
  while(std::cin >> numero) {
    suma_de_digitos(numero,suma);
  }
  return 0;
  }
