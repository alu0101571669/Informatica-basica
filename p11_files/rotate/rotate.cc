#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file rotate.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 23/11/2023
  * @brief Programa que modifica las vocales del contenido de un fichero
*/

/**
 * @brief Función para modificar las letras del fichero
 * @param letra Letra a ser modificada
 * @return Letra modificada
*/

char CambiarLetra(char& letra) {
  switch (letra) {
    case 'a':
      letra = 'e';
    break;
    case 'e':
      letra = 'i';
    break;
    case 'i':
      letra = 'o';
    break;
    case 'o':
      letra = 'u';
    break;
    case 'u':
      letra = 'a';
    break;
  }
  return letra;
}

/**
 * @brief Función para modificar las líneas del fichero de entrada
 * @param frase Frase correspondiente a la línea
 * @return Frase modificada
*/

string CambiarLetraEnFrase(string& frase) {
  char letra;
  for (char& letra : frase) {
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
      letra = CambiarLetra(letra);
    }
  }
  return frase;
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    cout << "Se debe de introducir un fichero.txt que contenga una frase." << endl;
    exit(EXIT_FAILURE);
  }
  ifstream file(argv[1]); // Leo el fichero
  string frase;
  while (getline(file, frase)) { // Obtener la frase correspondiente a la línea del fichero
    cout << CambiarLetraEnFrase(frase) << endl;
  }
  file.close(); // Cerramos el fichero
  return 0;
}