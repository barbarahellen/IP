/*
6) Escreva um programa em C que pergunta um número inteiro ao usuário. Decidir
se esse é um número primo e apresentar o resultado na saída padrão. 
*/

#include<stdio.h>
#include<stdlib.h>
int main (void){

    int numero, i;

    printf("digite um numero para verificar se e primo: ");
    scanf("%d", &numero);

    for (i = numero-1; i > 1; i--){
        if (numero % i == 0){
            printf("numero %d nao e primo!!\n", numero);
            exit(0);
        }
    }
    printf("numero %d e primo!", numero);
   
    
    return 0;
}