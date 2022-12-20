#include <iostream>

int main() {

char minuscula;
std::cin >> minuscula;
int n = int(minuscula);
n = n - 97;
n = n + 65;
std::cout << char(n) << std::endl;
return 0;
}
