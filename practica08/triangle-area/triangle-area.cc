#include <iostream>
#include <cmath>
#include <iomanip>

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología 
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @file triangle-area.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 19/11/2022
 * @brief Programa que te calcula el área de un triángulo, en el caso que uno de los lados sea mayor que la suma de los otros dos, el triángulo no es válido
*/
  
double is_a_valid_triangle(const double lado1, double lado2, double lado3) {
  if(lado1 > (lado2 + lado3) or lado2 > (lado1 + lado3) or lado3 > (lado1 + lado2)) {
    std::cout << "Not a valid Triangle" << std::endl;
  }
  else {
    double s = (lado1 + lado2 + lado3) / 2;
    double area = sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
    std::cout << std::fixed << std::setprecision(2) << area << std::endl;
  }
  return 0;
}

int main() {
  double lado1; 
  double lado2; 
  double lado3;
  std::cin >> lado1 >> lado2 >> lado3;
  is_a_valid_triangle(lado1, lado2, lado3);
  return 0;  
}
