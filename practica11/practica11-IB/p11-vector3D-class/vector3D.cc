/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F de Sande
 * @date Dec 16 2022
 * @brief Vector3D class Implementation
 */

#include <iostream>
#include <cmath>

#include "vector3D.h"

/**
 * @brief Displays the given vector.
 * @param[in] kOutput: The output that is shown to the user.
 * @param[in] kVector: constant reference to the given vector.
 * @return the output.
 */
std::ostream& operator<<(std::ostream& output, const Vector3D& Vector3D) {
  output << '(' << Vector3D.x_position() << ", " << Vector3D.y_position() << ", " << Vector3D.z_position() << ")\n";
  return output;
}
