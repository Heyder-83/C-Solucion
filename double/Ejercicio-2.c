#include <stdio.h>

int main() {
    double num1, num2, suma;

    printf("Ingresa el primer numero: ");
    scanf("%lf", &num1);  // %lf para double

    printf("Ingresa el segundo numero: ");
    scanf("%lf", &num2);

    suma = num1 + num2;

    printf("La suma de %.2lf + %.2lf = %.2lf\n", num1, num2, suma);

    return 0;
}