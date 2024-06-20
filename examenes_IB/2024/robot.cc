#include <iostream>

class Point2D {
 public:
  Point2D() {}
  Point2D(int x, int y) : x_(x), y_(y) {}

  // Getters
  inline int Getx() const { return x_; }
  inline int Gety() const { return y_;}

  friend std::ostream& operator<<(std::ostream& os, const Point2D& point) {
    os << "(" << point.x_ << "," << point.y_ << ")";
    return os;
  }

 private:
  int x_;
  int y_;
};

namespace robot {
  enum class Direccion {
    Norte,
    Sur,
    Este,
    Oeste
  };

  class Robot {
   public:
    // Constructores
    Robot(const std::string& nombre, const Point2D& posicion, const Direccion& direccion, const int cansancio);

    // Funciones
    void GiroDerecha();
    void GiroIzquierda();
    void Avanzar();
    void EjecutaSecuencia(const std::string& secuencia);

    // Getters
    inline std::string GetNombre() const { return nombre_; }
    inline Point2D GetPosicion() const { return posicion_; }
    inline Direccion GetDireccion() const { return direccion_; }
    inline int GetCansancio() const { return cansancio_; }

   private:
    std::string nombre_;
    Point2D posicion_;
    Direccion direccion_;
    int cansancio_;
  };
}  // namespace robot

/**
 * @brief Constructor de la clase robot
 * @param nombre Nombre del robot
 * @param posicion Posición del robot
 * @param direccion Dirección del robot
 * @param cansancio Cansancio del robot
*/

robot::Robot::Robot(const std::string& nombre, const Point2D& posicion, const Direccion& direccion, const int cansancio) {
  nombre_ = nombre;
  posicion_ = posicion;
  direccion_ = direccion;
  cansancio_ = cansancio;
}

/**
 * @brief Sobrecarga del operador <<
*/

std::ostream& operator<<(std::ostream& os, const robot::Robot& robot) {
  os << robot.GetNombre() << "posicion" << robot.GetPosicion() << " cansancio " << robot.GetCansancio();
  return os;
}

/**
 * @brief Función para que el robot gire a la derecha
*/

void robot::Robot::GiroDerecha() {
  switch (direccion_) {
    case Direccion::Norte:
      direccion_ = Direccion::Este;
      break;
    case Direccion::Sur:
      direccion_ = Direccion::Oeste;
      break;
    case Direccion::Este:
      direccion_ = Direccion::Sur;
      break;
    case Direccion::Oeste:
      direccion_ = Direccion::Norte;
      break;
  }
}

/**
 * @brief Función para que el robot gire a la izquierda
*/

void robot::Robot::GiroIzquierda() {
  switch (direccion_) {
    case Direccion::Norte:
      direccion_ = Direccion::Oeste;
      break;
    case Direccion::Sur:
      direccion_ = Direccion::Este;
      break;
    case Direccion::Este:
      direccion_ = Direccion::Norte;
      break;
    case Direccion::Oeste:
      direccion_ = Direccion::Sur;
      break;
  }
}

/**
 * @brief Función paraque el robot avance
*/

void robot::Robot::Avanzar() {
  switch (direccion_) {
    case Direccion::Norte:
      posicion_ = Point2D(posicion_.Getx(), posicion_.Gety() + 1);
      break;
    case Direccion::Sur:
      posicion_ = Point2D(posicion_.Getx(), posicion_.Gety() - 1);
      break;
    case Direccion::Este:
      posicion_ = Point2D(posicion_.Getx() + 1, posicion_.Gety());
      break;
    case Direccion::Oeste:
      posicion_ = Point2D(posicion_.Getx() - 1, posicion_.Gety());
      break; 
  }
  cansancio_++;
}

/**
 * @brief Método para ejecutar una secuencia
 * @param secuencia Secuencia a ejecutar
*/

void robot::Robot::EjecutaSecuencia(const std::string& secuencia) {
  for (auto accion : secuencia) {
    switch(accion) {
      case 'A':
        Avanzar();
        break;
      case 'D':
        GiroDerecha();
        break;
      case 'I':
        GiroIzquierda();
        break;
    }
  }
}

using robot::Robot;
using robot::Direccion;

int main() {
  const Point2D posicion(7, 3);
  const Direccion orientacion(Direccion::Norte);
  Robot c3po("c3po", posicion, orientacion, 0);
  c3po.EjecutaSecuencia("DAAIAI");
  std::cout << c3po << std::endl;
  Robot r2d2("r2d2", posicion, Direccion::Sur, 0);
  std::cout << r2d2 << std::endl;
  return 0;
}