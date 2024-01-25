#include "point2D.h"

namespace robot {
  enum class Direccion {
    NORTE,
    ESTE,
    SUR,
    OESTE,
  };

  class Robot {
    public:
     Robot(const string& nombre, const Point2D& posicion, const Direccion& direccion, const int cansancio);

     // Funciones de la clase
     void GirarDerecha();
     void GirarIzquierda();
     void Avanzar();
     void EjecutaSecuencia(string);
     
     // Getters
     inline string GetNombre() const { return nombre_; }
     inline Point2D GetPosicion() const { return posicion_; }
     inline Direccion GetDireccion() const { return direccion_; }
     inline int GetCansancio() const { return cansancio_; }
    
    private:
    string nombre_;
    Point2D posicion_;
    Direccion direccion_;
    int cansancio_;
  };
}

ostream& operator<<(ostream& os, const robot::Robot& type);