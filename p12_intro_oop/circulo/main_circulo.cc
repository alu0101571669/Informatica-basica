#include "circulo.h"

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file main_circulo.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 03/12/2023
  * @brief Programa que calcula el períemtro, área y si un punto pertenece a un circulo
*/

int main(int argc, char* argv[]) {
  if (argc != 4) {
    cout << "Introducir el centro del círculo y su radio" << endl;
    exit(EXIT_FAILURE);
  }
  // Datos del círculo
  double centro_x = atof(argv[1]);
  double centro_y = atof(argv[2]);
  double radio = atof(argv[3]);

  Circulo circle(centro_x, centro_y, radio);
  cout << "--CÍRCULO CREADO--" << endl;
  circle.Print(); // Imprimir la información del círculo
  // Área del círculo
  cout << "Área: " << circle.Area() << endl;
  // Perímetro del círculo
  cout << "Perímetro: " << circle.Perimetro() << endl;
  // Comprobar que un punto se encuentra dentro del círculo
  cout << "Introducir un punto: ";
  double punto_x, punto_y;
  cin >> punto_x >> punto_y;
  // comprobar que el punto insertado pertenezca al círculo
  if (circle.EsInterior(punto_x, punto_y)) {
    cout << "El punto: (" << punto_x << ", " << punto_y << ") pertenece al círculo" << endl; 
  }
  else {
    cout << "El punto: (" << punto_x << ", " << punto_y << ") no pertenece al círculo" << endl;
  }
  return 0;
}