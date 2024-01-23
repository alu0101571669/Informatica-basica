#include <iostream>
#include <string>

using namespace std;

class Car {
  public:
   // Constructores
   Car();
   Car(string, string, int);
   // Funciones del programa
   string model() const { return model_; }
   string plate() const { return plate_; }
   int kilometers() const { return kilometers_; }
   // Sobrecarga de operadores
   friend istream& operator>>(istream& is, Car& type);
   friend ostream& operator<<(ostream& os, Car& type);
   bool operator>=(const Car& type);
   
  private:
   string model_;
   string plate_;
   int kilometers_;
};