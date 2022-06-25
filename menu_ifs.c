#include <stdio.h>
#include <stdlib.h>

/* 
faca um programa que apresente um menu com 4 itens e a opção 
de sair, exiba uma mensagem diferente para a opção de sair.
*/
int main (void){

    char opcao;

    printf("Menu\n\tA - Primeira Opcao\n\tB - Segunda Opcao");
    printf("\n\tC - Terceira Opcao\n\tD - Quarta Opcao");
    printf("\n\tX - Sair\n\n");
    printf("Digite a opcao: ");
    scanf("%c", &opcao);

    switch (opcao) {
        case 'A':{
            printf("Opcao A escolhida\n");
            break;
        }
        case 'B':{
            printf("Opcao B escolhida\n");
            break;
        }
        case 'C': {
            printf("Opcao C escolhida\n");
            break;
        }
        case 'D':{
            printf("Opcao D escolhida\n");
            break;
        }
        case 'X':{
            printf("Opcao de saida escolhida\n");
            exit(0);
        }
        default:{
            printf("Opcao invalida!\n");
        }
    }
        
    printf("saindo depois da opcao %c\n", opcao);


    return 0; 
}