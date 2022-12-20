
#include <iostream>

int main() {

std::cout << "p      !p     " << std::endl;
std::cout << "--------------" << std::endl;
std::cout << true << "       " << !true << std::endl;
std::cout << false <<  "       " << !false << std::endl;


std::cout << "p q  p && q" << std::endl;
std::cout << "-----------" << std::endl;
std::cout << false << " " <<  false << "     " << (false && false) << std::endl;
std::cout << false << " " <<  true  << "     " << (false && true) << std::endl;
std::cout << true  << " " <<  false << "     " << (true && false) << std::endl;
std::cout << true  << " " <<  true  << "     " << (true && true) << std::endl;

std::cout << "p q  p || q" << std::endl;
std::cout << "-----------" << std::endl;
std::cout << false << " " << false  << "     " << (false && false) << std::endl;
std::cout << false << " " << true   << "     " << (false && true) << std::endl;
std::cout << true  << " " << false  << "     " << (true && false) << std::endl;
std::cout << true  << " " << true   << "     " << (true && true) << std::endl;
std::cout << std::endl;
return 0;
}
