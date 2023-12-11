#include <iostream>
#include <fstream>
#include "racional.h"

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file main_racional.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 11/12/2023
  * @brief Programa que opera con números racionales
*/

int main(int argc, char* argv[]) {
  if (argc == 2) {
    string ayuda = argv[1];
    if (ayuda == "--help") {
    cout << argv[0] << " -- Números Racionales" << endl;
    cout << "Modo de uso: ./racionales fichero_entrada fichero_salida" << endl;
    cout << "fichero_entrada: Fichero de texto conteniendo líneas con un par de números racionales: a/b c/d separados por un espacio" << endl;
    cout << "fichero_salida: Fichero de texto que contendrá líneas con las operaciones realizadas: a/b + c/d = n/m" << endl;
    }
  }
  else if (argc != 3) {
    cout << argv[0] << " -- Números Racionales" << endl;
    cout << "Pruebe ./racionales --help para más información" << endl;
    exit(EXIT_FAILURE);
  }

  // Ficheros de entrada y salida
  ifstream filein(argv[1]);
  ofstream fileout(argv[2]);

  // Leer los números racionales
  Racional racional1, racional2, resultado;
  while (filein >> racional1 >> racional2) {
    // Sumar los números
    resultado = racional1 + racional2;
    fileout << "Operaciones con: " << racional1 << " " << racional2 << endl;
    fileout << racional1 << " + " << racional2 << " = " << resultado << endl;
    // Restar los números
    resultado = racional1 - racional2;
    fileout << racional1 << " - " << racional2 << " = " << resultado << endl;
    // Multiplicar los números
    resultado = racional1 * racional2;
    fileout << racional1 << " * " << racional2 << " = " << resultado << endl;
    // Dividir los números
    resultado = racional1 / racional2;
    fileout << racional1 << " / " << racional2 << " = " << resultado << endl;
    // Comparación
    if (racional1 = racional2) {
      fileout << "Las fracciones son iguales" << endl;
    }
    else if (racional1 < racional2) {
      fileout << racional1 << " es menor que " << racional2 << endl;
    }
    else if (racional1 > racional2){
      fileout << racional1 << " es mayor que " << racional2 << endl;
    }
  }
  filein.close();
  fileout.close();
  return 0;
}