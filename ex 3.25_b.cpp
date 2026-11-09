#include <iostream>

int main() {
    int terminos;
    std::cout << "Introduce el numero de terminos para calcular e: ";
    std::cin >> terminos;

    double e = 1.0;
    double fact = 1.0;
    int i = 1;

    while (i < terminos) {
        fact *= i;
        e += 1.0 / fact;
        ++i;
    }

    std::cout << "Valor estimado de e: " << e << std::endl;
    return 0;
}