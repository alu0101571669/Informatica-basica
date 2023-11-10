#include "capitalize_vowels.h"

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file main_capitalize_vowels.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 09/11/2023
*/

int main(int argc, char* argv[]) {
  if (argc != 2) {
    cout << "Se debe de introducir una cadena" << endl;
    exit(EXIT_SUCCESS);
  }
  string cadena = argv[1];
  cout << "Cadena modificada: " << ChangeString(cadena) << endl;
  return 0;
}