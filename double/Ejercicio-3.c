#include <stdio.h>

int main() {
    double num, suma = 0.0;
    int i;

    for (i = 1; i <= 5; i++) {
        printf("Ingresa el numero %d: ", i);
        scanf("%lf", &num);
        suma += num;  // acumulamos
    }

    double promedio = suma / 5.0;

    printf("El promedio de los 5 numeros es: %.2lf\n", promedio);

    return 0;
}