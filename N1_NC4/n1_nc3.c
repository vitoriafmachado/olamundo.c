#include <stdio.h>

int main() {
    // Declarando as variáveis
    int idade;
    float altura;

    // Solicitando e lendo a idade
    printf("Entre com a sua idade: ");
    scanf("%d", &idade);

    // Solicitando e lendo a altura
    printf("Entre com a sua altura (em metros): ");
    scanf("%f", &altura);

    // Exibindo os valores informados
    printf("\n--- Dados Informados ---\n");
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);

    return 0;
}

