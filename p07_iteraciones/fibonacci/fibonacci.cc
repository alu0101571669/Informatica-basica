#include <iostream>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file fibonacci.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 21/10/2023
  * @brief Programa que imprime los N números de la serie de Fibonacci
*/

void PrintProgramPurpose() {
  cout << "Programa que imprima los n términos de la serie de Fibonacci" << endl;
  cout << "Número: ";
}

/**
 * @brief Realiza la suma de los términos de la serie de Fibonacci
 * @param numero Número para saber cuando hay que parar de hacer la sucesión
*/

void Fibonacci(int numero) {
  int suma; // Almacena la suma de los números de la serie
  int first = 0; // Primer número de la serie
  int second = 1; // Segundo número de la serie
  for (int it = 0; it < numero; it++) {
    cout << first << " ";
    suma = first + second;
    second = first;
    first = suma;
  }
}

int main() {
  PrintProgramPurpose();
  int numero;
  cin >> numero;
  Fibonacci(numero);
  cout << endl;
  return 0;
}