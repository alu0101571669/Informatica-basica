#include "concatenation.h"

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file main_concatenation.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 15/11/2023
  * @brief Programa que realiza la concatenación de 2 vectores
*/

int main() {
  int size_1, size_2, elemento;
  vector<int> vector_1, vector_2;
  // Crear los vectores
  cout << "Tamaño del primer vector: ";
  cin >> size_1;
  cout << "Introduce los elementos del primer vector: ";
  // Crear el primer vector
  while (size_1 != 0) {
    cin >> elemento;
    vector_1.push_back(elemento);
    size_1--;
  }
  cout << "Tamaño del segundo vector: ";
  cin >> size_2;
  cout << "Introduce los elementos del segundo vector: ";
  // Crear el segundo vector
  while (size_2 != 0) {
    cin >> elemento;
    vector_2.push_back(elemento);
    size_2--;
  }
  // Concatenar los vectores
  vector<int> Concatenacion = Concatenation(vector_1, vector_2);
  cout << "Concatenación de los vectores: ";
  for (int posicion : Concatenacion) {
    cout << posicion << " ";
  }
  cout << endl;
  return 0;
}