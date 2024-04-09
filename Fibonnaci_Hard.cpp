#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int n, limitador, primeiro = 0, segundo = 1, proximo;

    printf("Digite o n�mero de termos da sequencia de Fibonacci: ");
    scanf("%d", &limitador);
    
    printf("Advinhe um n�mero da sequencia de Fibonacci (digite):");
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
		printf("\nAcertou, o seu n�mero pertence a sequencia fibonnaci");
	} else {
		printf("\nN�o acertou, o seu n�mero n�o pertence a sequencia fibonnaci ");
	}
    return 0;
}
