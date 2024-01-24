#include <iostream>

using namespace std;

class Point2D {
  public:
   Point2D(int x, int y); // Constructor

   // Getters
   inline int GetX() const { return coordenada_x_; }
   inline int GetY() const { return coordenada_y_; }
   // Sobrecarga de operadores
   friend ostream& operator<<(ostream& os, const Point2D& point);

  private:
  int coordenada_x_;
  int coordenada_y_;
};