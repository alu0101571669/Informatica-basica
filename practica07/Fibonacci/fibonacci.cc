#include <iostream>

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología 
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @file fibonacci.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 12/11/2022
 * @brief Programa que muestra los n primeros números de la serie de Fibonacci
*/

int main() {
  int insert_numero, numero = 1, ultimo_numero = 0;
	std::cout << "Insertar un número cualquiera: ";
  std::cin >> insert_numero;

  while(insert_numero > 0) {
    std::cout << ultimo_numero << " ";
    int numero_en_cabeza = numero + ultimo_numero;
    ultimo_numero = numero;
    numero = numero_en_cabeza;
    insert_numero--;
  }
  std::cout << std::endl;
  return 0;
  }
