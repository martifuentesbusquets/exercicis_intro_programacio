#include <iostream>
#include <iomanip>

int main() {
    double pi = 0.0;
    long terminosTarget = 0;
    bool encontrado = false;

    std::cout << "Termino\t\tValor de Pi" << std::endl;
    std::cout << "------------------------" << std::endl;

    for (long i = 1; i <= 200000; ++i) {
        double termino = 4.0 / (2 * i - 1);
        if (i % 2 == 1) {
            pi += termino;
        } else {
            pi -= termino;
        }

        if (i <= 5) {
            std::cout << i << "\t\t" << std::fixed << std::setprecision(8) << pi << std::endl;
        }

        if (!encontrado && pi >= 3.14159 && pi < 3.14160) {
            terminosTarget = i;
            encontrado = true;
        }
    }

    std::cout << "\nTras 200000 terminos, Pi es aproximadamente: " << std::setprecision(8) << pi << std::endl;
    if (encontrado) {
        std::cout << "Se necesitan " << terminosTarget << " terminos para obtener 3.14159..." << std::endl;
    }

    return 0;
}