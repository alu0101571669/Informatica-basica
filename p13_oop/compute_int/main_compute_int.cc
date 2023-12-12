#include "compute_int.h"

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file main_compute_int.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 13/12/2023
  * @brief Programa que opera con números enteros
*/

int main() {
  int numero;
  cout << "Número ? ";
  cin >> numero;
  ComputeInt compute_integer(numero);
  // Factorial de un número
  cout << compute_integer.Factorial() << endl;
  // Sumar los n números de la serie del número
  cout << compute_integer.SumSerie() << endl;
  // Comprobar que el número es primo
  cout << (compute_integer.IsPrime() ? "Is Prime" : "Not Prime") << endl;
  // Comprobar que un número es primo perfecto
  cout << (compute_integer.IsPerfectPrime() ? "Is Perfect Prime" : "Not Perfect Prime") << endl;
  // Comprobar que 2 números son primos relativos
  cout << "Número a comprobar que es relativo ocon el " << numero << " ? ";
  cin >> numero;
  cout << (compute_integer.AreRelativePrimes(numero) ? "Are Relative Primes" : "Not Relative Primes") << endl;
  
  return 0;
}