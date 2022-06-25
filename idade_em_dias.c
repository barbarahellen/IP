/*
    Faça um programa que pergunte a idade do usuário e que depois calcule e exiba a idade aproximada em dias.
*/

#include <stdio.h>
#include <math.h>

int main (void){

    int idade_anos, idade_dias;

    printf("digite sua idade (em anos): ");
    scanf("%d", &idade_anos);

    idade_dias = idade_anos * 365;

    printf("sua idade em dias: %d", idade_dias);

    return 0;
}