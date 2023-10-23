#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file programa2.cc
  * @author Franco Alla alu0101571669@ull.edu.es
  * @date 23/10/2023
  * @brief Programa que te pide un número del 1 al 2 y luego calcula el área de un rectangulo y de un circulo
*/

using namespace std;

int main() {
  int number;
  cin >> number;
  for (int i = 0; i < number; i++) {
    string shape;
    cin >> shape;
    if (shape == "rectangle") {
      double length, width;
      cin >> length >> width;
      double area = length * width;
      cout << fixed << setprecision(6) << area << endl;
    } 
    else if (shape == "circle") {
      double radius;
      cin >> radius;
      double area = M_PI * pow(radius, 2);
      cout << fixed << setprecision(6) << area << endl;
    } 
    else {
      cout << "Invalid shape: " << shape << endl;
    }
  }
  return 0;
}