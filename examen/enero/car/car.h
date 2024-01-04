#include <iostream>
#include <string>

using namespace std;

class Car {
  public:
    Car(); // Cosntructor por defecto
    Car(string, string, int); // Constructor de la clase Car
    string model() const { return model_; }
    string plate() const { return plate_; }
    int kilometers() const { return kilometers_; }

    // Sobrecarga de operadores
    friend istream& operator>>(istream& is, Car& car);
    friend ostream& operator<<(ostream& os, Car& car);
    bool operator<(const Car& car);
  private:
  string model_;
  string plate_;
  int kilometers_;
};