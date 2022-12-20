#include <iostream>

int main() {
char minuscula;
std::cin >> minuscula;
int n = int(minuscula);

if(minuscula >= 65 and minuscula <= 90)
{
std::cout << char(n + 32) << std::endl;
}

if(minuscula >= 97 and minuscula <= 122)
{
std::cout << char(n - 32) << std::endl;
}
return 0;
}

