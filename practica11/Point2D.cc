#include <iostream>

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @Point2D.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 17/12/2022
 * @brief Programa que te pide un punto y te dice datos sobre él
*/

void show (double x, double y) {
  std::cout << "Las coordenadas del punto son: " << "(" << x << "," << y << ")" << std::endl;
}
void distance (double x, double y) {
  std::cout << "La distancia de los puntos es: " << y - x << std::endl;
}
void middle (double x, double y) {
  double punto_medio = (y - x) / 2;
  std::cout << "El punto medio es: " << punto_medio << std::endl;
}
void move (double x, double y) {
  std::cout << "La nueva coordenada de x es : ";
  std::cin >> x;
  std::cout << "La nueva coordenada de y es : ";
  std::cin >> y;
}

void opciones (int numero, double x, double y) {
  std::cout << "Pulse 1: Ver el punto" << std::endl;
  std::cout << "Pulse 2: Calcular la distancia" << std::endl;
  std::cout << "Pulse 3: Calcular el punto medio" << std::endl;
  std::cout << "Pulse 4: Cambiar las coordenadas" << std::endl;
  while(std::cin >> numero){
    if(numero == 1) {
      show(x, y);
    }
    if(numero == 2) {
      distance(x, y);
    }
    if(numero == 3) {
      middle(x, y); 
    }
    if(numero == 4) {
      move(x, y);
    }
  }
}

int main () {
  double x, y;
  int numero;
  std::cout << "Introducir las coordenadas del punto: ";
  std::cin >> x >> y;
  opciones(numero, x, y);
  return 0;
}
