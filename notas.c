#include <stdio.h>

int main() {
    int notas[5]; // declara um array de 5 posições para armazenar notas
    int i;       // variável de controle para o loop (repetição)

    // entrada do usuário
    printf("Digite 5 notas:\n");

    for (i=0; i < 5; i++){
        scanf("%d",&notas[i]);
    }


    printf("\n Notas digitadas:\n");

    for (i =0; i < 5; i++);{
        printf("%d\n", notas[i]);
    
    }

    
    return 0;

}