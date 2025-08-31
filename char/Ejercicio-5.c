#include <stdio.h>
#include <ctype.h>  // Para isdigit()

int main() {
    char caracter;

    printf("Ingresa un caracter: ");
    scanf(" %c", &caracter);

    if (isdigit(caracter)) {
        printf("'%c' es un digito numerico.\n", caracter);
    } else {
        printf("'%c' NO es un digito numerico.\n", caracter);
    }

    return 0;
}