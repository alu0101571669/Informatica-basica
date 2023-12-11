#include <iostream>
#include "personas.h"

using namespace std;

class Entrenador {
  public:
  Entrenador(string& nombre, int& edad, string& dni, int& licencia, int& fecha_inicio_contrato, int& fecha_fin_contrato);
  
  private: // atributos privados de la clase
  int licencia_;
  int fecha_inicio_contrato_;
  int fecha_fin_contrato_;
};

Entrenador::Entrenador(string& nombre, int& edad, string& dni, int& licencia, int& fecha_inicio_contrato, int& fecha_fin_contrato) {
  Persona(nombre, edad, dni);
  this->fecha_fin_contrato_ = fecha_fin_contrato;
  this->fecha_inicio_contrato_ = fecha_inicio_contrato;
  this->licencia_ = licencia;
}