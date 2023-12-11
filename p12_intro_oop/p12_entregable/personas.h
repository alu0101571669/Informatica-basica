#include <iostream>

using namespace std;

class Persona {
  public:
  Persona(string& nombre, int& edad, string& dni);

  inline string GetNombre() { return nombre_; }
  inline int GetEdad() { return edad_; }
  inline string GetDni() { return dni_; }

  private:
  string nombre_;
  int edad_;
  string dni_;
};

Persona::Persona(string& nombre, int& edad, string& dni) {
  this->dni_ = dni;
  this->edad_ = edad;
  this->nombre_ = nombre;
}