#include <stdio.h>

int main() {
    int a, b, c;

    printf("Ingresa tres numeros enteros separados por espacio: ");
    scanf("%d %d %d", &a, &b, &c);

    int mayor = a;

    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;

    printf("El numero mayor es: %d\n", mayor);

    return 0;
}