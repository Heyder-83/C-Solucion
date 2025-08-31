#include <stdio.h>

int main() {
    double num;

    printf("Ingresa un numero: ");
    scanf("%lf", &num);

    if (num > 0) {
        printf("El numero %.2lf es POSITIVO.\n", num);
    } else if (num < 0) {
        printf("El numero %.2lf es NEGATIVO.\n", num);
    } else {
        printf("El numero es CERO.\n");
    }

    return 0;
}