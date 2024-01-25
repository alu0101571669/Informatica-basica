#include "robot.h"

/**
 * @brief Constructor de la clase robot
 * @param nombre Nombre del robot
 * @param posicion Posicion del robot en el eje de coordenadas
 * @param direccion Direccion a la que apunta el robot
 * @param cansancio Cansancio actual del robot
*/

robot::Robot::Robot(const string& nombre, const Point2D& posicion, const Direccion& direccion, const int cansancio) {
  nombre_ = nombre;
  posicion_ = posicion;
  direccion_ = direccion;
  cansancio_ = cansancio;
}

/**
 * @brief Función para que el robot gire a la derecha
*/

void robot::Robot::GirarDerecha() {
  switch (direccion_) {
    case Direccion::NORTE:
      direccion_ = Direccion::ESTE;
      break;
    case Direccion::ESTE:
      direccion_ = Direccion::SUR;
      break;
    case Direccion::SUR:
      direccion_ = Direccion::OESTE;
      break;
    case Direccion::OESTE:
      direccion_ = Direccion::NORTE;
      break;
  }
}

/**
 * @brief Función para que el robot gire a la izquierda
*/

void robot::Robot::GirarIzquierda() {
  switch (direccion_) {
    case Direccion::NORTE:
      direccion_ = Direccion::OESTE;
      break;
    case Direccion::OESTE:
      direccion_ = Direccion::SUR;
      break;
    case Direccion::SUR:
      direccion_ = Direccion::ESTE;
      break;
    case Direccion::ESTE:
      direccion_ = Direccion::NORTE;
      break;
  }
}

/**
 * @brief Función para que el robot avance
*/

void robot::Robot::Avanzar() {
  int eje_x = posicion_.GetX();
  int eje_y = posicion_.GetY();

  switch (direccion_) {
    case Direccion::NORTE:
      eje_y++;
      posicion_.SetY(eje_y);
      break;
    case Direccion::SUR:
      eje_y--;
      posicion_.SetY(eje_y);
      break;
    case Direccion::ESTE:
      eje_x++;
      posicion_.SetX(eje_x);
      break;
    case Direccion::OESTE:
      eje_x--;
      posicion_.SetX(eje_x);
      break;
  }
  cansancio_++;
}

/**
 * @brief Función para ejecutar la secuencia del robot
 * @param secuencia Secuencia que se pretende ejecutar en el robot
*/

void robot::Robot::EjecutaSecuencia(string secuencia) {
  for (char letra : secuencia) {
    switch (letra) {
      case 'A':
        Avanzar();
        break;
      case 'D':
        GirarDerecha();
        break;
      case 'I':
        GirarIzquierda();
        break;
      default:
        cout << "Error al ejecutar la secuencia" << endl;
        break;
    }
  }
}

/**
 * @overload Sobrecarga del opearador <<
*/

ostream& operator<<(ostream& os, const robot::Robot& type) {
  os << type.GetNombre() << " en la posición " << type.GetPosicion() << " cansancio: " << type.GetCansancio();
  return os;
}

