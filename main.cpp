#include <iostream>

int func(int a, int b) {
    return a + b;
}

int main () {
    std::cout << "ABRINDO UM PR\n" << std::endl;

    int a = 1;
    int b = 2;
    int c = 3;

    // LEMBRAR DE APAGAR OS COMENTARIOS
    // int result = (a + b) / c; ESSA CONTA TAVA ERRADA!

    int r = (a * b) / c;

    std::cout << r << " FUNCIONANDO ??\n"; // Para debug aqui, apagar depois!

    return 0;
}
