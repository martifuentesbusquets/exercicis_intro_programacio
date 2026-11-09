#include <iostream>

int main() {
    long long producto = 1;

    for (int i = 1; i <= 15; i += 2) {
        producto *= i;
    }

    std::cout << "El producto de los enteros impares del 1 al 15 es: " << producto << std::endl;
    return 0;
}