/*
4) Escreva um programa em C que pergunta um número inteiro ao usuário e exibe 
na tela sua tabuada completa (de 1 até 10).
*/

#include<stdio.h>
int main (void){

    int numero, i;

    printf("digite um numero: ");
    scanf("%d", &numero);

    for (i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", numero, i, (numero * i));
    }


    return 0;
}