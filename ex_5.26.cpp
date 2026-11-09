#include <iostream>

void hanoi(int discos, int origen, int destino, int temporal) {
    if (discos == 1) {
        std::cout << origen << " -> " << destino << std::endl;
        return;
    }

    hanoi(discos - 1, origen, temporal, destino);
    std::cout << origen << " -> " << destino << std::endl;
    hanoi(discos - 1, temporal, destino, origen);
}

int main() {
    int n = 3;
    std::cout << "Movimientos para resolver las Torres de Hanoi con " << n << " discos:" << std::endl;
    hanoi(n, 1, 3, 2);
    return 0;
}