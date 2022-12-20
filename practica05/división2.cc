#include <iostream>
int main() {
int number1, number2;

std::cin >> number1 >> number2;
if(number2 > 0)
{
std::cout  << number1 / number2 << " " << number1 % number2 <<
std::endl;
}
else
{
std::cout << number1 / number2 << " " << number1 % number2 << std::endl;
}
return 0;
}
