#include <stdio.h>

/*
Escreva um programa em C que leia 10 numeros e os armazene em um array. Exiba os numeros na ordem inversa a que eles foram digitados.
*/

#define TAMANHO_ARRAY 10

int main (void){

    int numeros [TAMANHO_ARRAY];
    int i;

    for (i = 0; i < TAMANHO_ARRAY; i++){
        printf("Digite o numero [%d]: ", i);
        scanf("%d", &numeros[i]);

    }
    //exibir na ordem inversa

    for (i = 9; i >= 0; i--){
        printf("numeros [%d] = %d\n", i, numeros[i]);
    }


    return 0;
}