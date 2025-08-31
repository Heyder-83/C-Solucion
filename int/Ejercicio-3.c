#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1; // para evitar overflow rápido

    printf("Ingresa un numero entero positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("No existe el factorial de un numero negativo.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("El factorial de %d es: %llu\n", num, factorial);
    }

    return 0;
}