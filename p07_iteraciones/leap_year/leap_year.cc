#include <iostream>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file leap_year.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 21/10/2023
  * @brief Programa que te dice si un anyo es bisiesto
*/

void PrintProgramPurpose() {
  cout << "Programa que te indica si un año es bisiesto o no" << endl;
  cout << "Año a comprobar: ";
}

/**
 * @brief Verifica que el año sea bisiesto
 * @param anyo Año a comprobar
 * @return true en caso de que sea bisiesto
*/

bool IsLeapYear(int anyo) {
  if (anyo % 4 == 0 && anyo % 100 != 0 || anyo % 400 == 0) {
    return true;
  }
  return false;
}

int main() {
  int anyo;
  PrintProgramPurpose();
  cin >> anyo;
  cout << (IsLeapYear(anyo) ? "YES" : "NO") << endl;
  return 0;
}