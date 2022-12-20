#include <iostream>
using namespace std;

int main() {
int a = 2, b = 3;
double x = 0.4, y = 1.2;

cout << a + int(y*y) << endl;
cout << double(1 + int(2.5) * a) + .3 << endl;
cout << int(3.9) + 3 * int(x) + int(double(a) + 1.5) << endl;
cout << int(double(a) / x) << endl;
cout << double(a / int(y) + 1) << endl;
cout << double(int(x) / double(a + 1)) << endl;
return 0;
}
