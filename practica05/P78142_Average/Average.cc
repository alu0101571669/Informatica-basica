/*Universidad de La Laguna
   * Escuela Superior de Ingeniería y Tecnología
   * Grado en Ingeniería Informática
   * Informática Básica 2022-2023
   *
   * @file Average.cc
   * @author Franco Alla Prieto alu0101571669@ull.edu.es
   * @date Oct 31 2022
   * @brief El programa coge tres números cualesquiera, estos mayores que 0 y les calcula el promedio 
*/

#include <iostream>

int main() {
double numero1, numero2, numero3;
std::cin >> numero1 >> numero2 >> numero3;
int n = (numero1 + numero2 + numero3) / 3; 
if(numero1 > 0.0 and numero2 > 0.0 and numero3 > 0.0)
{
std::cout << n << std::endl;
}
return 0;
}
