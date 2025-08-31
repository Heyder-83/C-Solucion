#include <stdio.h>

int main() {
    int num1, num2, suma;

    printf("Ingresa el primer numero entero: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo numero entero: ");
    scanf("%d", &num2);

    suma = num1 + num2;

    printf("La suma de %d + %d = %d\n", num1, num2, suma);

    return 0;
}