#include <iostream>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file add_one_second.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 20/10/2023
  * @brief Programa que añade un segundo
*/

int main() {
  int hora, minutos, segundos;
  cin >> hora >> minutos >> segundos;
  segundos += 1; // Sumar un segundo
  if(segundos == 60) {
    segundos = 0;
    minutos += 1;
  }
  if(minutos == 60) {
    minutos = 0;
    hora += 1;
  }
  if(hora == 24) {
    segundos = 0;
    minutos = 0;
    hora = 0;
  }
  // Escribir horas, minutos, segundos si son menores que 10 
  if(hora < 10) {
    cout << 0;
  }
  cout << hora << ":";
  if(minutos < 10) {
    cout << 0;
  }
  cout << minutos << ":";

  if(segundos < 10) {
    cout << 0;
  }
  cout << segundos << endl;
  return 0;
}