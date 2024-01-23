#include <iostream>

using namespace std;

class Box {
  public:
   // Constructores de la clase
   Box();
   Box(double, double, double);
   // Funciones de la clase
   double length() { return length_; }
   double breadth() { return breadth_; }
   double height() { return height_; }
   // Sobrecarga de operadores
   friend istream& operator>>(istream& is, Box& type);
   friend ostream& operator<<(ostream& os, Box& type);
   bool operator==(const Box& type);

  private:
   double length_;
   double breadth_;
   double height_;
};