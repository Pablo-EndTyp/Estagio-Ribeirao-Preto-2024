#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int n, limitador, primeiro = 0, segundo = 1, proximo;

    printf("Digite o número de termos da sequencia de Fibonacci: ");
    scanf("%d", &limitador);
    
    printf("Advinhe um número da sequencia de Fibonacci (digite):");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci:\n");

    for (int i = 0; i < limitador; i++) {
        if (i <= 1) {
            proximo = i;
        } else {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }
        printf("%d ", proximo);
    }
    if (n == proximo) {
		printf("\nAcertou, o seu número pertence a sequencia fibonnaci");
	} else {
		printf("\nNão acertou, o seu número não pertence a sequencia fibonnaci ");
	}
    return 0;
}
