/*
    faça um programa que solicite ao usuário o valor para duas variaveis: x e y
    troque os valores dessas variáveis e exiba na tela.
*/

#include <stdio.h>

int main(void){

    int x, y, aux;

    printf("digite o valor de x: ");
    scanf("%d", &x);

    printf("digite o valor de y: ");
    scanf("%d",&y);

    aux = x;
    x = y;
    y = aux;

    printf("valor trocado de x: %d\n", x);
    printf("valor trocado de y: %d", y);


    return 0;
}