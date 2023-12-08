#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
  // Se debe de introducir un fichero con las ponderaciones y las notas
  if (argc < 2) {
    cout << "Introducir un fichero.txt que en cada fila contenga la ponderación y seguido de un espacio la nota" << endl;
    cout << "Modo de empleo: " << argv[0] << " fichero.txt" << endl;
    exit(EXIT_FAILURE);
  }
  ifstream file(argv[1]);
  double porcentaje, nota, ponderacion{0}, sumatorio_porcentajes{0}, sumatorio_ponderaciones{0};

  while (file >> porcentaje >> nota) {
    porcentaje /= 100; // Pasar a porcentaje
    ponderacion = porcentaje * nota; // Nota ponderada
    sumatorio_porcentajes += porcentaje; // Sumatorio de todos los porcentajes
    sumatorio_ponderaciones += ponderacion;
  }
  const double resultado = sumatorio_ponderaciones / sumatorio_porcentajes;
  cout << "Nota: " << resultado << endl;
  return 0;
}