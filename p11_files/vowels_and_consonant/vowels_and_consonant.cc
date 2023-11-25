#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file vowels_and_consonant.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 25/11/2023
  * @brief Programa que lee un fichero con un número de palabras y muestra por pantalla 
  *        la palabra que posea el mayor número de vocales y consonantes
*/

/**
 * @brief Función para calcular el número de vocales de una palabra
 * @param palabra Palabra a calcular su número de vocales
 * @return Número de vocales de la palabra
*/

int ContarVocales(string& palabra)  {
  int contador;
  for (char letra : palabra) {
    letra = tolower(letra);
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
      contador++;
    }
  }
  return contador;
}

/**
 * @brief Función que cuenta el número de consonantes de una palabra
 * @param palabra Palabra a calcular el número de consonantes
 * @return Número de consonantes de la palabra
*/

int ContarConsonantes(string& palabra)  {
  int contador;
  for (char letra : palabra) {
    letra = tolower(letra);
    if (letra != 'a' || letra != 'e' || letra != 'i' || letra != 'o' || letra != 'u') {
      contador++;
    }
  }
  return contador;
}

int main(int argc, char* argv[]) {
  // Comprobar los argumentos
  if (argc != 2) {
    cout << "Error: Se debe de ingresar un fichero.txt que en su interior tenga un determinado número de palabras." << endl;
    exit(EXIT_FAILURE);
  }
  string palabra, palabra_vocales, palabra_consonantes;
  int max_vocales{0}, max_consonantes{0};
  ifstream file(argv[1]);
  while (file >> palabra) {
    int vocales = ContarVocales(palabra);
    int consonantes = ContarConsonantes(palabra);
    // Establecer la palabra con más vocales
    if (vocales > max_vocales) {
      max_vocales = vocales;
      palabra_vocales = palabra;
    }
    // Establecer la palabra con más consonantes
    if (consonantes > max_consonantes) {
      max_consonantes = consonantes;
      palabra_consonantes = palabra;
    }
  }
  // Mostrar la palabra con más vocales y con más consonantes
  cout << "Palabra con más vocales: " << palabra_vocales << endl;
  cout << "Palabra con más consonantes: " << palabra_consonantes << endl;
  // Cerrar el fichero y terminar el programa
  file.close();
  return 0;
}