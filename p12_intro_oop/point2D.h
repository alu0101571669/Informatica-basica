#include <iostream>
#include <cmath>

using namespace std;

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file point2D.h
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 29/11/2023
  * @brief Declaración de la clase Point2D
*/

class Point2D {
  public:
  Point2D(double, double); // Constructor de la clase Point2D
  void show(); // Mostrar los puntos
  void Move(double, double); // Cambiar las coordenadas del punto
  double Distance(Point2D&); // Calcular la distancia entre 2 puntos
  Point2D Middle(Point2D&);
  private: // atributos privados de la clase
  int x_;
  int y_;
};