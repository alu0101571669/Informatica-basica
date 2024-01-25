#include <iostream>

using namespace std;

class Point2D {
  public:
   Point2D();
   Point2D(int x, int y); // Constructor

   // Getters
   inline int GetX() const { return coordenada_x_; }
   inline int GetY() const { return coordenada_y_; }

   // Setters
   inline void SetX(int x) { coordenada_x_ = x; }
   inline void SetY(int y) { coordenada_y_ = y; }
   
   // Sobrecarga de operadores
   friend ostream& operator<<(ostream& os, const Point2D& point);

  private:
  int coordenada_x_;
  int coordenada_y_;
};