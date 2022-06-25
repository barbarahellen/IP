/*
2) (1 ponto) Faça um programa em C que peça um número inteiro inicial ao 
usuário, um valor inteiro de razão e calcule os 10 primeiros termos de uma
P.G. (Progressão Geométrica), armazenando-os em um array de tamanho 10. 
Depois exiba os itens do array na ordem inversa e diga quantos dos valores
armazenados são pares. Explique nos comentários como funcionam os arrays;
*/

#include <stdio.h>
#include<math.h>
int main(void){

    int a1, q, an, i, pares = 0; //a1 = primeiro termo, q = razão, an = enésimo termo;
    int PG [10];

    printf("Digite o primeiro termo: ");
    scanf("%d", &a1);
    printf("Digite a razao da PG: ");
    scanf("%d", &q);

    for (i = 0; i < 10; i++){ // cálculo da PG
        PG[i] = 0;
        for (i = 1; i <= 10; i++){
            an = a1 * pow(q, i-1); // fórmula
            printf("%d\n", an);
        }
    }
    printf("\nOrdem inversa da PG:\n");
    for (i = 10; i >= 1; i--){
        an = a1 * pow(q, i-1);
        printf("%d\n", an); 
    }
    if (PG[i] % 2 == 0){      //se o número é par
        PG[i]++;
        printf("quantidade de numeros pares: %d", PG[i]);
    }
    
    return 0;

/*
Um array é um conjunto de espaços de memória que se relacionam pelo fato de que todos têm o mesmo nome e o mesmo tipo. Para se referir a um local ou elemento em particular no array, especificamos o nome do array e o número da posição do elemento em particular no array. Basicamente, serve para organizar melhor as informações
*/
}