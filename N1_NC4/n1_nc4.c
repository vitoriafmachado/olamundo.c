#include <stdio.h>


int main () {
    int idade = 25;
    int quantidade = 1;
    float altura = 1.55;
    double peso = 55.0 ; 
    char letra = 'v';
    char nome[] = "vitoria";


   
// Exibindo os valores com printf
    printf("Idade: %d anos\n", idade);
    printf("Quantidade: %d\n", quantidade);
    printf("Altura: %.2f metros\n", altura);
    printf("Peso: %.2lf kg\n", peso);
    printf("Letra: %c\n", letra);
    printf("Nome: %s\n", nome);

    return 0;

}