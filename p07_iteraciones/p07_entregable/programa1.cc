#include <iostream>
#include <iomanip>

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file programa1.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 23/10/2023
  * @brief Programa que calcula la resta de 2 números harmónicos
*/

using namespace std;

int main() {
  int numero1, numero2;
  double harmonico1, harmonico2, division1, division2, suma1, suma2;
  while(cin >> numero1 >> numero2) {
    if(numero1 < numero2) {
      exit(EXIT_SUCCESS);
    }
    for(int it = 1; it <= numero1; it++) { // Realizar el primer harmonico
      division1 = 1.0 / it;
      suma1 += division1;
    }
    harmonico1 = suma1;
    suma1 = 0; // Reseteo la suma
    for(int it2 = 1; it2 <= numero2; it2++) { // Realizar el segundo harmonico
      division2 = 1.0 / it2;
      suma2 += division2;
    }
    harmonico2 = suma2;
    suma2 = 0; // Reseteo la suma 2
    cout << fixed << setprecision(10) << harmonico1 - harmonico2 << endl;
  }
  return 0;
}