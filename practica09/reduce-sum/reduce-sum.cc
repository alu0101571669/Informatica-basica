#include <iostream>

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @reduce-sum.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 27/11/2022
 * @brief Programa que calcula el maximo, minimo y la media de 3 numeros cualesquiera
*/

double Maximo(double numero1, double numero2, double numero3, double mayor) {

  if(numero1 >= numero2 and numero1 >= numero3) {
    mayor = numero1;
  }
  if(numero2 >= numero1 and numero2 >= numero3) {
    mayor = numero2;
  }
  if(numero3 >= numero1 and numero3 >= numero2) {
    mayor = numero3;
  }
  return mayor;
}
double Minimo(double numero1, double numero2, double numero3, double menor) {

  if(numero1 <= numero2 and numero1 <= numero3) {
    menor = numero1;
  }
  if(numero2 <= numero1 and numero2 <= numero3) {
    menor = numero2;
  }
  if(numero3 <= numero1 and numero3 <= numero2) {
    menor = numero3;
  }
  return menor;
}
double Media(double numero1, double numero2, double numero3) {
  double calculo = (numero1 + numero2 + numero3) / 3;
  return calculo;
}
int main() {
  double numero1, numero2, numero3, mayor, menor;
  std::cin >> numero1 >> numero2 >> numero3;
  std::cout << "Máximo:" << Maximo(numero1, numero2, numero3, mayor) << std::endl;
  std::cout << "Mínimo:" << Minimo(numero1, numero2, numero3, menor) << std::endl;
  std::cout << "Media:" << Media(numero1, numero2, numero3) << std::endl;
  return 0;
}
