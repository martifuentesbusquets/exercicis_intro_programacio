#include <iostream>

int main() {
    int numero;
    std::cout << "Introduce el numero cifrado de 4 cifras: ";
    std::cin >> numero;

    int c1 = (numero / 1000) % 10;
    int c2 = (numero / 100) % 10;
    int c3 = (numero / 10) % 10;
    int c4 = numero % 10;

    int d1 = c3;
    int d2 = c4;
    int d3 = c1;
    int d4 = c2;

    d1 = (d1 + 3) % 10;
    d2 = (d2 + 3) % 10;
    d3 = (d3 + 3) % 10;
    d4 = (d4 + 3) % 10;

    std::cout << "Numero original descifrado: " << d1 << d2 << d3 << d4 << std::endl;

    return 0;
}