#include "scalar_product.h"

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file main_scalar_product.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 09/11/2023
*/

int main () {
  int tamano;
  double numero;
  vector<double> vector1, vector2;
  // Generar el vector 1
  cout << "Introducir el tamaño del vector 1: ";
  cin >> tamano;
  cout << "Elementos del vector 1: ";
  while (tamano != 0) {
    cin >> numero;
    vector1.push_back(numero);
    tamano--;
  }
  // Generar el vector 2
  cout << "Introducir el tamaño del vector 2: ";
  cin >> tamano;
  cout << "Elementos del vector 2: ";
  while (tamano != 0) {
    cin >> numero;
    vector2.push_back(numero);
    tamano--;
  }
  // Imprimo el vector 1
  cout << "Vector 1: ";
  PrintVector(vector1);
  // Imprimo el vector 2
  cout << "Vector 2; ";
  PrintVector(vector2);
  // Comprobar que la dimensión de ambos vectores sea la misma
  if (IsEqual(vector1.size(), vector2.size())) {
    cout << "Producto escalar de los dos vectores: " << ScalarProduct(vector1, vector2) << endl;
  }
  else {
    cout << "Los vectores no tienen la misma longitud" << endl;
  }
  return 0;
}