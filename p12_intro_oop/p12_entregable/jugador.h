#include <iostream>
#include "personas.h"

using namespace std;

class Jugador {
  public:
  Jugador(string& nombre, int& edad, string& dni, double& altura, double& peso, string& posicion);

  private:
  double altura_;
  double peso_;
  string posicion_;
};

Jugador::Jugador(string& nombre, int& edad, string& dni, double& altura, double& peso, string& posicion) {
  Persona(nombre, edad, dni);
  this->altura_ = altura;
  this->peso_ = peso;
  this->posicion_ = posicion;
}