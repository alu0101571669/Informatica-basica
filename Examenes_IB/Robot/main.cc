#include "robot.h"

using robot::Robot;
using robot::Direccion;

int main() {
  const Point2D posicion{7, 3};
  const Direccion orientacion{Direccion::NORTE};
  Robot c3po{"c3po", posicion, orientacion, 0};
  c3po.EjecutaSecuencia("DAAIAI");
  cout << c3po << endl;

  Robot r2d2("r2d2", posicion, Direccion::SUR, 0);
  cout << r2d2 << endl;

  return 0;
}