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
     // Getters
     inline string GetNombre() const { return nombre_; }
     inline Point2D GetPosicion() const { return posicion_; }
     inline Direccion GetDireccion () const { return direccion_; }
     inline int GetCansancio() const { return cansancio_; }

     // Sobrecarga de operadores
     friend ostream& operator<<(ostream& os, const Robot& robot);
    
    private:
    string nombre_;
    Point2D posicion_;
    Direccion direccion_;
    int cansancio_;
  };
}