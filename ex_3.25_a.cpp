#include <iostream>

int main() {
    int n;
    std::cout << "Introduce un numero entero no negativo: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "El numero debe ser no negativo." << std::endl;
        return 1;
    }

    long long factorial = 1;
    int i = n;

    while (i > 1) {
        factorial *= i;
        --i;
    }

    std::cout << n << "! = " << factorial << std::endl;
    return 0;
}