#include "vector.h"

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file main_vector.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 16/11/2023
  * @brief Programa que opera con un vector
*/

int main() {
  int size, lower, upper;
  cout << "Insertar size del vector: ";
  cin >> size;
  cout << "Insertar dos números enteros que definan el rango en el que se puedan situar los elementos del vector: ";
  cin >> lower >> upper;
  // Comprobar que se ha insertado correctamente el intervalo
  if (lower > upper) {
    cout << "Error: El primer valor no puede ser mayor que el segundo" << endl;
    exit(EXIT_SUCCESS);
  }
  // Generar el vector y mostrarlo por pantalla
  vector<double> mi_vector = GenerateVector(size, lower, upper);
  cout << "Vector generado: ";
  for (double elemento : mi_vector) {
    cout << elemento << " ";
  }
  // Mostrar la suma del vector
  cout << "\nSuma de los elementos del vector: " << GenerateSum(mi_vector) << endl;
  // Mostrar el máximo, mínimo y promedio del vector
  double maximo, minimo, promedio;
  CalcularDatos(mi_vector, maximo, minimo, promedio);
  cout << "Máximo: " << maximo << endl;
  cout << "Mínimo: " << minimo << endl;
  cout << "Promedio: " << promedio << endl;
  return 0;
}