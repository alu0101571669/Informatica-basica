#include "point2D.h"

Point2D::Point2D() {}

Point2D::Point2D(const int x, const int y) {
  coordenada_x_ = x;
  coordenada_y_ = y;
}

ostream& operator<<(ostream& os, const Point2D& punto) {
  os << "(" << punto.coordenada_x_ << ", " << punto.coordenada_y_ << ")";
  return os;
}