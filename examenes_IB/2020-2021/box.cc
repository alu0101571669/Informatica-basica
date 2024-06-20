#include <iostream>
#include <cassert>

using namespace std;

class Box {
 public:
  // Constructor
  Box() {}
  Box(int lenght, int breadth, int height) : lenght_(lenght), breadth_(breadth), height_(height) {}

  // Getters
  int lenght() const { return lenght_; }
  int breadth() const { return breadth_; }
  int height() const { return height_; }

  // setters
  void SetLenght(int lenght) { lenght_ = lenght; }
  void SetBreadth(int breadth) { breadth_ = breadth; }
  void SetHeight(int height) { height_ = height; }

  bool operator==(const Box& box) const;

 private:
  int lenght_;
  int breadth_;
  int height_;
};

/**
 * @brief Sobrecarga del operador ==
 * @param box Caja a comparar
 * @return true si las cajas son iguales, false en caso contrario
*/

bool Box::operator==(const Box& box) const {
  return lenght_ == box.lenght_ && breadth_ == box.breadth_ && height_ == box.height_;
}

// Operadores de inserción y estracción
ostream& operator<<(ostream& os, const Box& box) {
  os << "Largo: " << box.lenght() << " Ancho: " << box.breadth() << " Alto: " << box.height() << endl;
  return os;
}

istream& operator>>(istream& is, Box& box) {
  int largo, ancho, alto;
  is >> largo >> ancho >> alto;
  assert(largo > 0 && ancho > 0 && alto > 0);
  box.SetBreadth(ancho), box.SetHeight(alto), box.SetLenght(largo);
  return is;
}

int main() {
  Box caja1;
  Box caja2(10, 20, 30);
  cout << "Introduce las dimensiones de la caja 1 (largo, ancho, alto): ";
  cin >> caja1;
  cout << caja1 << caja2;
  if (caja1 == caja2) {
    cout << "Las cajas son iguales" << endl;
  } else {
    cout << "Las cajas son diferentes" << endl;
  }
  return 0;
}