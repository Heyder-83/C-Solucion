#include <stdio.h>

int main() {
    char letra;

    printf("Ingresa un caracter: ");
    scanf("%c", &letra);

    printf("El caracter es: %c y su codigo ASCII es: %d\n", letra, letra);

    return 0;
}
