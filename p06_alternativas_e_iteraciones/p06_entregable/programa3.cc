#include <iostream>
#include <vector>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file programa3.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 23/10/2023
  * @brief Programa que lee una secuencia de números y muestra cual de esa secuencia es el mayor de una serie creciente
*/

int main() {
  int numero_de_series, count;
  cin >> numero_de_series;
  for(int i = 0; i < numero_de_series; i++) {
    vector<int> sequence;
    int num;
    while(true) {
      cin >> num;
      if (num == 0) {
        break;
      }
      sequence.push_back(num);
    }
    // Calcular y mostrar el conteo de pares consecutivos
    int count = 0;
    for(int it = 1; it < sequence.size(); it++) {
      if(sequence[it] > sequence[it - 1]) {
        count++;
      }
    }
    cout << count << endl; 
  }
  return 0;
}