  #include <iostream>

  /*Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología 
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @file top-to-bottom.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 07/11/2022
 * @brief Programa que te pide dos numeros y te saca la serie de dichos numeros de manera inversa (Ej:5,4,3,2,1)
*/

  int main() {
  int num1, num2;

  std::cin >> num1 >> num2;
  if(num1 < num2) {
  for(num2; num1 < num2; num2--) {
  std::cout << num2 << std::endl;
}
  }

  if(num1 > num2) {
  for(num1; num1 >= num2; num1--) {
  std::cout << num1 << std::endl;
}
  }
  if(num1 == num2) {
  std::cout << num1 << std::endl;
    }
  return 0;
    }
