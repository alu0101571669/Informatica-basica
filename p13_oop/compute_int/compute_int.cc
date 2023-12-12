#include "compute_int.h"

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file compute_int.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 13/12/2023
  * @brief Implementación de la clase compute_int.cc
*/

/**
 * @brief Constructor de la clase ComputeInt
 * @param numero Número
 * @return Objeto de la clase
*/

ComputeInt::ComputeInt(int numero) {
  this->numero_ = numero;
}

/**
 * @brief Funión para obtener el número
 * @return Número
*/

int ComputeInt::GetNumero() {
  return numero_;
}

/**
 * @brief Calcular el factorial de un número
 * @return Factorial
*/

int ComputeInt::Factorial() {
  int factorial = 1;
  for (int i = numero_; i != 0; i--) {
    factorial *= i;
  }
  return factorial;
}

/**
 * @brief Sumar los n primeros números de la serie
 * @return Suma de los n números
*/

int ComputeInt::SumSerie() {
  int suma = 0;
  for (int i = 1; i <= numero_; i++) {
    suma += i;
  }
  return suma;
}

/**
 * @brief Comprobar que un número es primo
 * @return 1 en caso de verdadero y 0 en caso contrario
*/

bool ComputeInt::IsPrime() {
  for (int i = 2; i * i < numero_; i++) {
    if (numero_ % i == 0) {
      return false;
    }
  }
  return true;
}

/**
 * @brief Comprobar que un número es primo perfecto
 * @return 1 en caso de verdadero, 0 en caso contrario
*/

bool ComputeInt::IsPerfectPrime() {
  int suma_divisores = 1;
  for (int i = 2; i <= numero_ / 2; i++) {
    if (numero_ % i == 0) {
      suma_divisores += i;
    }
  }
  if (numero_ == suma_divisores) {
    return true;
  }
  return false;
}

/**
 * @brief Comprobar que 2 números son primos perfectos
 * @return 1 en caso de verdadero, 0 en caso contrario
*/

bool ComputeInt::AreRelativePrimes(int numero2) {
  int numero = GetNumero();
  while (numero2 != 0) {
    int temp = numero2;
    numero2 = numero % numero2;
    numero = temp;
  }
  if (numero == 1) {
    return true;
  }
  return false;
}
