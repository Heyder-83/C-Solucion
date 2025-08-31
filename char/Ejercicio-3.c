#include <stdio.h>
#include <ctype.h>  // Librería para toupper()

int main() {
    char letra;

    printf("Ingresa una letra minuscula: ");
    scanf(" %c", &letra);

    // Convertir a mayúscula con toupper()
    char mayuscula = toupper(letra);

    printf("La letra '%c' en mayuscula es: '%c'\n", letra, mayuscula);

    return 0;
}