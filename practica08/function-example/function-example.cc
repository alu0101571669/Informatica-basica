#include <iostream>
#include <cmath>

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología 
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @file function-example.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 19/11/2022
 * @brief Programa que sustituye 3 valores en una función predeterminada
*/

double numerador(double numerot) {
  double raiz = sqrt((2 * numerot) - 4);
  return raiz;
}

double denominador(double numerox, double numeroy) {
  double resta = (numerox * numerox) - (numeroy * numeroy);
  return resta;
}

int main() {
  double numerox;
  double numeroy;
  double numerot;
  std::cin >> numerox >> numeroy >> numerot;
  std::cout << numerador(numerot) / denominador(numerox, numeroy) << std::endl;
  return 0;
}
