#include <iostream>

int main() {
int a = 5, b = 2, c = 7, d = 1;
double x = 1.0, y = 0.5, z = 1.5;

std::cout << a - b - c << std::endl;
std::cout << c / b / b << std::endl;
std::cout << x * z / y << std::endl;
std::cout << c / (a / b) << std::endl;
std::cout << a  + b*2 + d*(1 - c) << std::endl;
std::cout << x*y + z*2.0*(x - 1.0) << std::endl;
std::cout << 5*(-a) + c*3 - b << std::endl;
return 0;
}
