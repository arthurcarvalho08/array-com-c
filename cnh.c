#include <stdio.h>

int main(){
    char nome[50];
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    if (idade >=18){
    printf("Olá %s, você tem anos %d, pode dirigir!\n", nome, idade);
    }
    else{
        printf("Olá %s, você tem %d anos, não pode dirigir!\n", nome, idade); 
   
    }
    return 0; 
    } 