#include<stdio.h>

/*
faca um programa que calcule a media de 3 notas
e exiba o resultado de acordo com o valor final.
utilize o switch.
*/

int main(void){

    float nota1, nota2, nota3, media;
    int mediaInt;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    media = ((nota1 + nota2 + nota3)/3);
    mediaInt = (int)media;

    switch (mediaInt){
        case 0:
        case 1:
        case 2:
        case 3:{
            printf("\n\tMedia %.2f - Resultado: Reprovado\n", media);
            break;
        }
        case 4:
        case 5:
        case 6:{
            printf("\n\tMedia %.2f - Resultado: Prova Final\n", media);
            break;
        }
        case 7:
        case 8:
        case 9:
        case 10:{
             printf("\n\tMedia %.2f - Resultado: Aprovado\n", media);
             break;
        }
        default:{
            printf("\n\tMedia %.2f - Valor Incorreto\n", media);
        }
    }
    


    return 0;
}