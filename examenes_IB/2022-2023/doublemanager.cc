#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

#define EPSILON 1e-6

class DoubleManager {
 private:
  std::vector<double> grid_[10];
  int GetIndex(const double value);

 public:
 // Constructores
 DoubleManager() {}

 // Métodos
 void Add(const double value);
 double Closset(const double value);
};

/**
 * @brief Función que devuelve el índice en el que se encuentra el valor
 * @param value Valor a buscar
 * @return Índice en el que se encuentra el valor
*/

int DoubleManager::GetIndex(const double value) {
  assert(0 <= value && value <= 9);
  return int(value);
}

/**
 * @brief Función que añade un valor en el vector que le corresponda
 * @param value Valor a insertar
*/

void DoubleManager::Add(const double value) {
  int index = GetIndex(value);
  grid_[index].push_back(value);
}

/**
 * @brief Función que devuelve el valor más cercano al valor dado
 * @param value Valor a buscar
 * @return Valor más cercano al valor dado
*/

double DoubleManager::Closset(const double value) {
  int index = GetIndex(value);
  double closset = -1;
  if (index == 0 || index == 9) {
    while (index <= 1 || index <= 9) {
      for (int i = 0; i < grid_[index].size(); i++) {
        if ((std::abs(grid_[index][i] - value) < EPSILON) && (std::abs(closset - value) < grid_[index][i] - value)) {
          closset = grid_[index][i];
          break;
        }
      }
      if (index == 0) index++;
      if (index == 9) index--;
    }
  }
  else {
    for (int i = 0; i < grid_[index].size(); i++) {
      if (std::abs(grid_[index][i] - value) < EPSILON && std::abs(closset - value) < grid_[index][i] - value) {
        closset = grid_[index][i];
        break;
      }
    }
    for (int i = 0; i < grid_[index - 1].size(); i++) {
      if (std::abs(grid_[index - 1][i] - value) < EPSILON && std::abs(closset - value) < grid_[index - 1][i] - value) {
        closset = grid_[index - 1][i];
        break;
      }
    }
    for (int i = 0; i < grid_[index + 1].size(); i++) {
      if (std::abs(grid_[index + 1][i] - value) < EPSILON && std::abs(closset - value) < grid_[index + 1][i] - value) {
        closset = grid_[index + 1][i];
        break;
      }
    }
  }
  return closset;
}

int main() {
  DoubleManager dm;
  dm.Add(3.9);
  dm.Add(4.1);
  dm.Add(4.9);

  std::cout << dm.Closset(4.1) << std::endl;

  return 0;
}