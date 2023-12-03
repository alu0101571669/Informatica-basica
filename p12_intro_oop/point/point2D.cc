#include "point2D.h"

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file point2D.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 29/11/2023
  * @brief Implementación de la clase Point2D
*/

/**
 * @brief Constructor de la clase Point2D
 * @param x Punto en el eje x
 * @param y Punto en el eje y
*/

Point2D::Point2D(double x, double y) {
  this->x_ = x;
  this->y_= y;
}

/**
 * @brief Función para cambiar las coordenadas de un punto
 * @param new_x Nueva coordenada en el eje x
 * @param new_y Nueva coordenada en el eje y
*/

void Point2D::Move(double new_x, double new_y) {
  x_ = new_x;
  y_ = new_y;
}

/**
 * @brief Función para calcular la distancia entre 2 puntos
 * @param punto2 Punto 2
 * @return Distancia entre los puntos
*/

double Point2D::Distance(Point2D& punto2) {
  double x = pow(punto2.x_ - x_, 2);
  double y = pow(punto2.y_ - y_, 2);
  return sqrt(x + y);
}

/**
 * @brief Función que calcula el punto medio del segmento formado por 2 puntos
 * @param punto2 Punto 2
 * @return Objeto de la clase Point2D
*/

Point2D Point2D::Middle(Point2D& punto2) {
  double mitad_x = (x_ + punto2.x_) / 2;
  double mitad_y = (y_ + punto2.y_) / 2;
  return Point2D(mitad_x, mitad_y);
}

/**
 * @brief Función para mostrar por pantalla los puntos
*/

void Point2D::show() {
  cout << "(" << x_ << ", " << y_ << ")" << endl;
}

