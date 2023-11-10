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

/**
 * @brief Función que calcula el valor del polinomio para un valor dado
 * @param pol Polinomio
 * @param value Valor a sustituir por las x's
 * @return Imagen del valor
*/

int Polynomial(vector<int>& pol, int value) {
  int imagen{0};
  int exponente = pol.size() - 1;
  for (auto it = pol.begin(); it != pol.end(); it++) {
    imagen += *it * pow(value, exponente);
    exponente--;
  }
  return imagen;
}

/**
 * @brief Función para imprimir el polinomio
 * @param pol Polinomio a imprimir
*/

void PrintPoly(vector<int>& pol) {
  int grado = pol.size() - 1;
  for (auto it = pol.begin(); it != pol.end(); it++) {
    cout << *it;
    if(next(it) != pol.end()) {
      cout << "x^" << grado << " ";
    }
    grado--;
  }
  cout << endl;
}

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
  cout << "Imagen para el valor " << value << ": " << Polynomial(polinomio, value) << endl;
  return 0;
}