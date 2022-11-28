#include <iostream>
#include <vector>

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @product-escalar.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 28/11/2022
 * @brief Programa que calcula el producto escalar de 2 vectores
*/

double scalar_product(const std::vector<double>& u, const std::vector<double>& v) {
  double r = 0.0;
  for (int i = 0; i < u.size(); i++) r+ = v[i] * u[i];
  return r;
}

int main () {
}
