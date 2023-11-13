#include <iostream>
#include <vector>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file programa2.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 13/1172023
  * @brief Programa que crea una secuencia de números e imprime esa secuencia de manera inversa 
*/

int main() {
  vector<int> numeros;
  int digito, tam; // Tamaño del vector
  while (cin >> tam) {
    // Relleno el vector
    while (tam != 0) {
      cin >> digito;
      numeros.push_back(digito);
      tam--;
    }
    // Imprimo la secuencia de números al revés
    for (int i = numeros.size() - 1; i >= 0; i--) {
      cout << numeros[i];
      if (i > 0) {
        cout << " ";
      }
    }
    cout << endl; // Carácter especial y salto de línea
    numeros.clear(); // Eliminar el vector
  }
  return 0;
}