#include <stdio.h>

int main() {
    int n = 1000;       // cantidad de términos
    double pi = 0.0;    // acumulador

    for (int i = 0; i < n; i++) {
        // Fórmula: pi/4 = Σ ((-1)^i) / (2i+1)
        if (i % 2 == 0) {
            pi += 1.0 / (2 * i + 1);
        } else {
            pi -= 1.0 / (2 * i + 1);
        }
    }

    pi *= 4; // multiplicamos por 4 para obtener pi

    printf("El valor aproximado de PI con %d terminos es: %.15f\n", n, pi);

    return 0;
}