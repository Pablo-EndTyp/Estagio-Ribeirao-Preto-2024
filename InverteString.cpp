#include <stdio.h>

int main() {
    char palavra[50];
    char aux;
    int length = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    // Calcula o comprimento da palavra
    while (palavra[length] != '\0') {
        length++;
    }

    // Inverte a palavra
    for (int i = 0; i < length / 2; i++) {
        aux = palavra[i];
        palavra[i] = palavra[length - i - 1];
        palavra[length - i - 1] = aux;
    }

    printf("Palavra invertida: %s\n", palavra);
    return 0;
}
