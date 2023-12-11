#include <iostream>
#include "personas.h"

using namespace std;

class Ayudante {
  public:
  Ayudante(string& nombre, int& edad, string& dni, int& inicio_contrato, int& fin_contrato);

  private:
  int inicio_contrato_;
  int fin_contrato_;
};

Ayudante::Ayudante(string& nombre, int& edad, string& dni, int& inicio_contrato, int& fin_contrato) {
  Persona(nombre, edad, dni);
  this->inicio_contrato_ = inicio_contrato;
  this->fin_contrato_ = fin_contrato;
}