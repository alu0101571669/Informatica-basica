#include "fecha.h"

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file main_fecha.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 03/12/2023
  * @brief Programa que verifica que un año sea bisiesto
*/

int main(int argc, char* argv[]) {
  Fecha fecha;
  if (argc != 2) {
    cout << "Modo de empleo: ./fecha dates.txt" << endl;
    exit(EXIT_FAILURE);
  }
  ifstream dates(argv[1]);
  while (dates >> fecha) {
    if (fecha.EsBisiesto() && fecha.IsValidDate()) {
      cout << "El año de la fecha: " << fecha << " es bisiesto" << endl;
    }
    else if (!fecha.EsBisiesto() && fecha.IsValidDate()) {
      cout << "El año de la fecha: " << fecha << " no es bisiesto" << endl;
    }
  }
  
  return 0;
}