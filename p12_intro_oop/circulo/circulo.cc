#include "circulo.h"

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file circulo.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 03/12/2023
  * @brief Implementación de la clase Circulo
*/

/**
 * @brief Contructor de la clase Circulo
 * @param centro_x Centro del círculo en el eje x
 * @param centro_y Centro del círculo en el eje y
 * @return Objeto de la clase Circulo
*/

Circulo::Circulo(double centro_x, double centro_y, double radio) {
  this->centro_x_ = centro_x; // Centro del círculo en el eje x
  this->centro_y_ = centro_y; // Centro del círculo en el eje y
  this->radio_ = radio; // Radio del círculo
}

/**
 * @brief Calcular el área del círculo
 * @return Área
*/

double Circulo::Area() {
  return M_PI * pow(radio_,2);
}

/**
 * @brief Calcular el perímetro del círculo
 * @return Perímetro
*/

double Circulo::Perimetro() {
  return 2 * M_PI * radio_;
}

/**
 * @brief Comprobar que un punto se encuentra situado dentro del círculo
 * @param punto_x Coordenada x del punto
 * @param punto_y coordenada y del punto
 * @return 1 en caso de verdadero, 0 en caso contrario
*/

bool Circulo::EsInterior(double punto_x, double punto_y) {
  // Calcular la distancia de ese punto con el centro del círculo
  double distancia_centro = sqrt(pow(punto_x - centro_x_, 2) + pow(punto_y - centro_y_, 2));
  if (distancia_centro <= radio_) {
    return true;
  }
  return false;
}

/**
 * @brief Imprimir la información del círculo
*/

void Circulo::Print() {
  cout << "Centro: (" << centro_x_ << ", " << centro_y_ << ")" << endl;
  cout << "Radio: " << radio_ << endl;
}