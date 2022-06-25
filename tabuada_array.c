/*
3) (1 ponto) Faça um programa em C que calcule e armazene em um array 
bidimensional os valores das tabuadas de 1 a 10. Depois, solicite do usuário
um valor inteiro entre 1 e 10 (repita a solicitação enquanto o usuário não
inserir corretamente) e exiba a tabuada do número correspondente, a partir
dos valores constantes no array bidimensional.
*/

#include <stdio.h>
#define linhas 10
#define colunas 3

int main(void) {
    int tabuada[linhas][colunas];
    int numero, i, j;

    do{ //informações necessárias para a tabuada funcionar
        printf("digite um numero entre 1 e 10: ");
        scanf("%d", &numero);
    } while (numero < 1 || numero > 10);

    //preencher a tabuada
    for(i = 0; i < linhas; i++){      
        for (j = 0; j< colunas; j++){  
            tabuada[i][j] = i*j;
        }   
    }
    for (i = 0; i <= 10; i++){
    printf("\n[%d] x [%d] = %d\n", numero, i, (numero * i));
    }

    return 0;
}