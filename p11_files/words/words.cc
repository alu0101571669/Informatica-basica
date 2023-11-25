#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file words.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 25/11/2023
  * @brief Programa que vuelca las palabras de un fichero en distintos ficheros según su letra inicial
*/

/**
 * @brief Función que crear el fichero para cada palabra
 * @param palabra Palabra necesaria para crear el fichero
 * @return Nombre del fichero
*/

string CrearFichero(const string& palabra) {
  char letra = toupper(palabra[0]);
  return string(1, letra) + ".txt";
}

int main(int argc, char* argv[]) {
  if (argc != 2) { // Comprobar que se ha proporcionado un fichero
    cout << "Error: Se debe de ingresar un fichero.txt que en su interior tenga un determinado número de palabras." << endl;
    exit(EXIT_FAILURE);
  }
  string palabra;
  ifstream words(argv[1]); // Leer el fichero que contiene las diferentes palabras
  while (words >> palabra) {
    string nombre_fichero = CrearFichero(palabra); // Crear el fichero
    ofstream outfile(nombre_fichero, ios::app);
    if (!outfile) { // Verificar que se ha podido crear el fichero
      cout << "No se ha podido crear el fichero" << endl;
    }
    outfile << palabra << endl; // Poner cada palabra en su fichero correspondiente
  }
  // Cerrar el fichero que contiene las palabras
  words.close();
  return 0;
}