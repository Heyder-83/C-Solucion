#include <stdio.h>
#include <math.h>  // Necesario para pow()

int main() {
    double base, exponente, resultado;

    printf("Ingresa el numero de la base: ");
    scanf("%lf", &base);

    printf("Ingresa el numero del exponente: ");
    scanf("%lf", &exponente);

    resultado = pow(base, exponente);

    printf("%.2lf elevado a %.2lf = %.4lf\n", base, exponente, resultado);

    return 0;
}