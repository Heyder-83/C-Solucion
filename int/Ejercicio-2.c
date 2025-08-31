#include <stdio.h>

int main() {
    int num;

    printf("Ingresa un numero entero: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("El numero %d es PAR.\n", num);
    } else {
        printf("El numero %d es IMPAR.\n", num);
    }

    return 0;
}