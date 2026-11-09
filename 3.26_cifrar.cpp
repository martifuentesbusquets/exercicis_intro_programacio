#include <iostream>

int main() {
    int numero;
    std::cout << "Introduce un numero de 4 cifras: ";
    std::cin >> numero;

    int d1 = (numero / 1000) % 10;
    int d2 = (numero / 100) % 10;
    int d3 = (numero / 10) % 10;
    int d4 = numero % 10;

    d1 = (d1 + 7) % 10;
    d2 = (d2 + 7) % 10;
    d3 = (d3 + 7) % 10;
    d4 = (d4 + 7) % 10;

    std::cout << "Numero cifrado: " << d3 << d4 << d1 << d2 << std::endl;

    return 0;
}