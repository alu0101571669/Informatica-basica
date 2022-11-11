int main() {
double numero;
std::cin >> numero;

double i, suma;
for( i = 1; i <= numero; i++) {
suma += 1.0 / i;
}
std::cout << std::fixed << std::setprecision(4) << suma << std::endl;
return 0;
}
