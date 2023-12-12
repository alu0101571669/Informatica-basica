#include <iostream>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file compute_int.h
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 13/12/2023
  * @brief Declaración de la clase ComputeInt
*/

class ComputeInt {
  public:
  ComputeInt(int); // Constructor de la clase
  // Operaciones
  int Factorial(); // Factorial de un número
  int SumSerie(); // Sumar los n primeros números de la serie
  bool IsPrime(); // Determinar que el número sea primo
  bool IsPerfectPrime(); // Saber que un número sea un primo perfecto
  bool AreRelativePrimes(int); // Saber si 2 números son relativamente primos

  // Getters
  int GetNumero(); // Obtener el número
  private:
  int numero_;
};