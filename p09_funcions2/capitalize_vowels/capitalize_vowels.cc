#include "capitalize_vowels.h"

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file capitalize_vowels.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 09/11/2023
  * @brief Programa que convierte las vocales en mayúsculas y las consonantes en minúsculas de una cadena proporcionada
*/

/**
 * @brief Función que modifica la cadena poniendo las vocales en mayúscula y las consonantes en minúscula
 * @param mi_cadena Cadena a modificar
 * @return Devuelve la cadena modificada
*/

string ChangeString(string& mi_cadena) {
  for (char& letra : mi_cadena) {
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
      letra = toupper(letra);
    }
    else {
      letra = tolower(letra);
    }
  }
  return mi_cadena;
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    cout << "Se debe de introducir una cadena" << endl;
    exit(EXIT_SUCCESS);
  }
  string cadena = argv[1];
  cout << "Cadena modificada: " << ChangeString(cadena) << endl;
  return 0;
}