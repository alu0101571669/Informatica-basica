#include <iostream>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file programa1.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 13/1172023
  * @brief Función que verifica si un número es múltiplo de 3
*/

/**
 * @brief Función que verifica si un número es múltiplo de 3
 * @param n Número a comprobar
 * @return 1 en caso de verdadero y 0 en caso contrario
*/

bool is_multiple_3(int n) {
  int suma{0}, digito;
  while (n != 0) {
    digito = n % 10;
    suma += digito;
    n /= 10; // Siguiente dígito
  }
  if (suma % 3 != 0) {
    return false;
  }
  return true;
}