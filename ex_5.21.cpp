#include <iostream>
#include <cstdlib>
#include <ctime>

int flip() {
    return std::rand() % 2;
}

int main() {
    std::srand(std::time(0));

    int caras = 0;
    int cruces = 0;

    for (int i = 1; i <= 100; ++i) {
        int resultado = flip();
        if (resultado == 1) {
            caras++;
            std::cout << "Heads ";
        } else {
            cruces++;
            std::cout << "Tails ";
        }

        if (i % 10 == 0) std::cout << std::endl;
    }

    std::cout << "\nResultados totales:" << std::endl;
    std::cout << "Caras (Heads): " << caras << std::endl;
    std::cout << "Cruces (Tails): " << cruces << std::endl;

    return 0;
}