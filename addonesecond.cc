#include <iostream>
//Write a program that adds one second to a clock time, given its hours, minutes and seconds

int main() {

int h, m , s;
std::cin >> h >> m >> s;
std::cout << h << ":" << m << ":" <<
s + 1 << std::endl;

if(s = 59)
{
std::cout << h << ":" << m + 1 << ":" << "00";
}
return 0;
}
