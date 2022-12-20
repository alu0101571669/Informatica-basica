#include <iostream>
#include <ctime>

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología 
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @file random-numbers.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 19/11/2022
 * @brief Programa que te pide un intervalo y te da como resultado un número aleatorio que se encuentre en dicho intervalo
*/

int rango(int minimo, int maximo) {
  srand((unsigned) time(0));
  int numero_aleatorio = (rand() % maximo) + minimo;
  std::cout << numero_aleatorio << std::endl;
  return 0;
}

int main() {
  int minimo, maximo;
  std::cin >> minimo >> maximo;
  rango(minimo, maximo);
  return 0;
}
