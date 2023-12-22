#include <iostream>

using namespace std;

class Box {
  public:
    Box();
    Box(double longitud, double ancho, double altura);
    int Longitud() { return longitud_; }
    int Ancho() { return ancho_; }
    int Altura() { return altura_; }
    // Sobrecarga de operadores
    friend istream& operator>>(istream& is, Box& type);
    friend ostream& operator<<(ostream& os, Box& type);
    bool operator==(Box& type);
  private:
    double longitud_;
    double ancho_;
    double altura_;
};