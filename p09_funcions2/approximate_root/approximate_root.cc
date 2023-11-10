#include <iostream>
#include <cmath>
#define EPSILON 1e-4

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file approximate_root.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 09/11/2023
  * @brief Programa que calcula la raíz cuadrada de un número
*/

/**
 * @brief Función que calcula la raíz cuadrada de un número
 * @param number Número a calcular su raíz cuadrada
 * @return Raíz cuadrada del número
*/

double Approximate(int number) {
  double root = 1.0;
  double delta = 1.0;
  // Mientras que la diferencia entre root² y number sea mayor que EPSILON
  while (std::abs(std::pow(root, 2) - number) > EPSILON) {
    // Si delta es positivo: mientras que root² sea menor que number, sume delta a root
    if (delta > 0) {
      while (std::pow(root, 2) < number) {
        root += delta;
      }
    }
    // En caso contrario: mientras que root² sea mayor que number, sume delta a root
    else {
      while (std::pow(root, 2) > number) {
        root += delta;
      }
    }
    // Multiplique delta por -0.5.
    delta *= -0.5;
  }
  return root;
}

int main() {
  int numero;
  cout << "Introduce un número para calcular su raíz cuadrada: ";
  cin >> numero;
  cout << "Raíz cuadrada del número: " << Approximate(numero) << endl;
  return 0;
}