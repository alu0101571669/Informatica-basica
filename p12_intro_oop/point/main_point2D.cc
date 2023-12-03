#include "point2D.h"

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file main_point2D.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 29/11/2023
  * @brief Programa que opera con puntos en el eje de coordenadas
*/

int main() {
  int x, y;
  Point2D punto1(1, 2);
  Point2D punto2(-1, 0);
  // Mostramos los puntos que están en el eje de coordenadas
  cout << "Puntos en el eje de coordenadas" << endl;
  punto1.show();
  punto2.show();
  // Cambiar las coordenadas del punto 1
  cout << "Introducir separado por un espacio las nuevas coordenadas del primer punto: ";
  cin >> x >> y;
  punto1.Move(x, y);
  // Calcular la distancia entre 2 puntos
  double distancia = punto1.Distance(punto2);
  cout << "Distancia entre los 2 puntos: " << distancia << endl;
  // Calcular el punto medio del segmento formado por los 2 puntos
  Point2D punto_medio = punto1.Middle(punto2);
  cout << "Punto medio: ";
  punto_medio.show();
  return 0;
}