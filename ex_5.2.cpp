#include <iostream>
#include <iomanip>
#include <cmath>

double calculateCharges(double h) {
    if (h <= 3.0) {
        return 20.00;
    }
    double total = 20.00 + std::ceil(h - 3.0) * 5.00;
    if (total > 50.00) {
        return 50.00;
    }
    return total;
}

int main() {
    double h1, h2, h3;

    std::cout << "Introduce las horas de aparcamiento de los 3 coches: ";
    std::cin >> h1 >> h2 >> h3;

    double c1 = calculateCharges(h1);
    double c2 = calculateCharges(h2);
    double c3 = calculateCharges(h3);

    double totalHoras = h1 + h2 + h3;
    double totalRecaudacion = c1 + c2 + c3;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nCar\tHours\tCharge" << std::endl;
    std::cout << "1\t" << h1 << "\t" << c1 << std::endl;
    std::cout << "2\t" << h2 << "\t" << c2 << std::endl;
    std::cout << "3\t" << h3 << "\t" << c3 << std::endl;
    std::cout << "TOTAL\t" << totalHoras << "\t" << totalRecaudacion << std::endl;

    return 0;
}