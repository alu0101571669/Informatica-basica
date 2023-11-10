#include "scalar_product.h"

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file scalar_product.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 09/11/2023
  * @brief Programa que calcula el producto escalar de 2 vectores
*/

/**
 * @brief Función que verifica si la dimensión de los vectores es la misma
 * @param size1 Tamaño del primer vector
 * @param size2 Tamaño del segundo vector
 * @return 1 en caso de que la dimensión sea la misma y 0 en caso contrario
*/

bool IsEqual(int size1, int size2) {
  if (size1 == size2) {
    return true;
  }
  return false;
}

/**
 * @brief Calcular el producto escalar de 2 vectores
 * @param vector1 Primer vector
 * @param vector2 Segundo vector
 * @return Producto escalar
*/

double ScalarProduct(vector<double>& vector1, vector<double>& vector2) {
  double suma{0};
  // Recorrer ambos vectores
  for (auto it = vector1.begin(), it2 = vector2.begin(); it != vector1.end(); it++, it2++) {
    suma += *it * *it2;
  }
  return suma;
}

/**
 * @brief Función para imprimir los vectores
 * @param mi_vector Vector a imprimir
*/

void PrintVector(vector<double>& mi_vector) {
  cout << "[ ";
  for (auto it = mi_vector.begin(); it != mi_vector.end(); it++) {
    cout << *it;
    if (next(it) != mi_vector.end()) {
      cout << ", ";
    }
  }
  cout << " ]" << endl;
}

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