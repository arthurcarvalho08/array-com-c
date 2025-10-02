#include <stdio.h>

int main() {
    char nome[50];
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    printf("Olá %s, você tem %d anos!\n", nome, idade);

    return 0;
}