#include <iostream>
#include <cmath>

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología 
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @AreEqual.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 19/11/2022
 * @brief Programa que muestra si dos números son iguales 
*/

bool arequal(double number1, double number2, const double epsilon = 1e-7) {
  if(abs(number1 - number2) < epsilon) {
  std::cout << "True" << std::endl;
  }
  else {
  std::cout << "False" << std::endl;
  }
  return 0;
}

int main() {
  double number1;
  double number2;
  const double epsilon = 1e-7;
  std::cin >> number1 >> number2;
  arequal(number1, number2, epsilon);
  return 0;
}
