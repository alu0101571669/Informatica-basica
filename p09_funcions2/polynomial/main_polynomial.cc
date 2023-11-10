#include "polynomial.h"

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file polynomial.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 09/11/2023
  * @brief Programa que evalua un polynomio
*/

int main() {
  int grado, numero, value;
  vector<int> polinomio;
  cout << "Introduce el grado del polinomio: ";
  cin >> grado;
  grado++;
  cout << "Introducir los valores para el polinomio: ";
  while (grado != 0) {
    cin >> numero;
    polinomio.push_back(numero);
    grado--;
  }
  cout << "Polinomio escrito: ";
  PrintPoly(polinomio);
  cout << "Valor a calcular: ";
  cin >> value;
  cout << "Valor del polinomio: " << Polynomial(polinomio, value) << endl;
  return 0;
}