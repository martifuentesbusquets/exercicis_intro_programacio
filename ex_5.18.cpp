#include <iostream>

int inverterNumero(int num) {
    int invertido = 0;
    while (num > 0) {
        int d = num % 10;
        invertido = (invertido * 10) + d;
        num /= 10;
    }
    return invertido;
}

int main() {
    int n;
    std::cout << "Introduce un numero entero: ";
    std::cin >> n;

    std::cout << "El numero invertido es: " << inverterNumero(n) << std::endl;
    return 0;
}