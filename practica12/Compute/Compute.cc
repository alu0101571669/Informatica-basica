#include <iostream>

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática 2022-2023
 * Informática Básica 2022-2023

 * @Compute.cc
 * @author Franco Alla Prieto alu0101571669@ull.edu.es
 * @date 06/01/2023
 * @brief Programa que calcula diversas cosas de 2 números 
*/

class ComputeInt {
  public:
    ComputeInt();
    ComputeInt(int numero1, int numero2);
    void Factorial(int numero1);
    void SumSerie(int numero1);
    bool IsPrime(int numero1);
    void IsPerfectPrime(int numero1);
    void AreRelativePrime(int numero1, int numero2);
private:
    int numero1;
    int numero2;
};

ComputeInt::ComputeInt() { ///Constructor por defecto
  numero1 = 0;
  numero2 = 0;
}
ComputeInt::ComputeInt(int _numero1, int _numero2) { ///Constructor con parámetros
  numero1 = _numero1;
  numero2 = _numero2;
}

void ComputeInt::Factorial(int numero1) { ///Calcular el factorial de un número
  int factorial = 1;
  for (int i = 1; i <= numero1; i++) {
    factorial *= i;
  }
  std::cout << "El factorial de " << numero1 << " es: " << factorial << std::endl;
}
void ComputeInt::SumSerie(int numero1) { ///Calcula la suma de una serie 
  int suma = 0;
  for (int i = 1; i <= numero1; i++) {
    suma += i;
  }
  std::cout << "La suma de la serie es: " << suma << std::endl;
}
bool ComputeInt::IsPrime(int numero1) { ///Ver si un número es primo 
  for (int i = 2; i*i <= numero1; i++) {
    if (numero1 % i == 0) {
      return false;
    }
  }
  if (numero1 == 1 || numero1 == 0) {
    return false; ///Si no es primo
  }
    return true; ///Si es primo
}
void ComputeInt::IsPerfectPrime(int numero1) { ///Ver si un número es primo perfecto 
    int suma = 0;
    int aux = numero1;
    do {
      suma += aux % 10;
      aux /= 10;
    } 
    while (aux > 0);
    if (IsPrime(numero1) == true && IsPrime(suma) == true) {
      std::cout << "El numero " << numero1 << " es primo perfecto" << std::endl;
    } 
    else {
      std::cout << "El numero " << numero1 << " no es primo perfecto" << std::endl;
    }
}
void ComputeInt::AreRelativePrime(int numero1, int numero2) { ///Ver si dos números son primos relativos 
    int aux = numero1;
    int aux2 = numero2;
    int resto = 0;
    do {
      resto = aux % aux2;
      aux = aux2;
      aux2 = resto;
    } 
    while (resto != 0);
    if (aux == 1) {
      std::cout << "Los numeros " << numero1 << " y " << numero2 << " son primos relativos" << std::endl;
    } 
    else {
      std::cout << "Los numeros " << numero1 << " y " << numero2 << " no son primos relativos" << std::endl;
    }
}

int main() {
  ComputeInt computation;
  computation.Factorial(5);
  computation.SumSerie(100);
  if (computation.IsPrime(13)) {
    std::cout << "13 es primo" << std::endl;
  }
  else {
    std::cout << "13 no es primo" << std::endl;
  }
  computation.IsPerfectPrime(977);
  computation.AreRelativePrime(13, 17);
  return 0;
}