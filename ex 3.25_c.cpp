#include <iostream>

int main() {
    double x;
    int terminos;

    std::cout << "Introduce el valor de x: ";
    std::cin >> x;
    std::cout << "Introduce el numero de terminos: ";
    std::cin >> terminos;

    double ex = 1.0;
    double potencia = 1.0;
    double fact = 1.0;
    int i = 1;

    while (i < terminos) {
        potencia *= x;
        fact *= i;
        ex += potencia / fact;
        ++i;
    }

    std::cout << "Valor estimado de e^" << x << " es: " << ex << std::endl;
    return 0;
}