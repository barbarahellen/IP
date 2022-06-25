/*
Faça um programa em C que leia 4 valores inteiros e apresente o maior deles, o menor deles e a média deles. 
*/

#include <stdio.h>

int main(void){

    int valor1, valor2, valor3, valor4, media, menor, maior; 
    
//Pedido ao usuário dos 4 valores.

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);
    printf("Digite o quarto valor: ");
    scanf("%d", &valor4);

    
//Dentre os 4 valores que o usuário digitou, precisa-se saber qual o menor entre eles.

    if((valor1 < valor2)&&(valor1 < valor3)&&(valor1 < valor4)){
      menor = valor1;
      printf("O menor valor e: %d ", menor); 
    } 
    if((valor2 < valor1)&&(valor2 < valor3)&&(valor2 < valor4)){
        menor = valor2;
        printf("O menor valor e: %d ", menor);
    }
    if((valor3 < valor1)&&(valor3 < valor2)&&(valor3 < valor4)){
        menor = valor3;
        printf("O menor valor e: %d ", menor);
    }
    if((valor4 < valor1)&&(valor4 < valor2)&&(valor4 < valor3)){
        menor = valor4;
        printf("O menor valor e: %d ", menor);
    }
    
// e o maior valor entre eles.
    if ((valor1 > valor2) && (valor1 > valor3) && (valor1 > valor4)){
        maior = valor1;
       printf("\nO maior valor e: %d ", valor1);
    }
    if((valor2 > valor1)&&(valor2 > valor3) && (valor2 > valor4)){
        maior = valor2;
        printf("\nO maior valor e: %d ", valor2);
    }
    if((valor3 > valor1)&&(valor3 > valor2) && (valor3 > valor4)){
        maior = valor3;
        printf("\nO maior valor e: %d ", valor3);
    }
    if((valor4 > valor1)&&(valor4 > valor2) && (valor4 > valor3)){
        maior = valor4;
        printf("\nO maior valor e: %d ", valor4);
    }

//Após isso, calculei  e exibi a média entre os dois.
    media = (menor + maior)/2;
    printf("\nA media entre os valores e: %d", media);
    
    return 0;
}
