#include <iostream>
#include <string>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file change_case.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 02/11/2023
  * @brief Programa que convierte las letras mayúsculas a minúsculas y viceversa
*/

/**
 * @brief Muestra el funcionamiento del programa
*/

void PrintProgramPurpose() {
  cout << "Programa que cambia las letras mayúsculas/minúsuclas de una palabra." << endl;
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  string palabra = argv[1];
  string palabra_cambiada;
  for (char letra : palabra) { // Recorrer la palabra
    if (isupper(letra)) {
      palabra_cambiada += tolower(letra); // Convertir la letra a minúscula
    }
    else {
      palabra_cambiada += toupper(letra); // Convertir la letra a mayúscula
    }
  }
  cout << palabra_cambiada << endl;
  return 0;
}