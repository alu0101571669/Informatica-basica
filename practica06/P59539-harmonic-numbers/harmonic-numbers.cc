#include <iostream>
#include <iomanip>
/*Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología 
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @file harmonic-numbers.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 06/11/2022
 * @brief Programa que te pide un numero y te calcula el enesimo
*/

int main() {
double numero;
std::cin >> numero;

double i, suma;
for( i = 1; i <= numero; i++) {
suma += 1.0 / i;
}
std::cout << std::fixed << std::setprecision(4) << suma << std::endl;
return 0;
}
