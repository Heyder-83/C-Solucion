#include <stdio.h>
#include <string.h> // Para strlen()

int main() {
    char palabra[100];
    char letra;
    int contador = 0;

    printf("Ingresa una palabra: ");
    scanf("%s", palabra); // lee palabra sin espacios

    printf("Ingresa la letra a buscar: ");
    scanf(" %c", &letra);

    // Recorrer la palabra y contar coincidencias
    for (int i = 0; i < strlen(palabra); i++) {
        if (palabra[i] == letra) {
            contador++;
        }
    }

    printf("La letra '%c' aparece %d veces en la palabra '%s'.\n", letra, contador, palabra);

    return 0;
}