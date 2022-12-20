#include <iostream>

int main() {
char mayuscula;
std::cin >> mayuscula;
int n = int(mayuscula);
n = n + 32;
std::cout << char(n) << std::endl;
return 0;
}
