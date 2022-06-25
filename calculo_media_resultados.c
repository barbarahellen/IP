/*
    Faça um programa que receba três notas de um aluno em uma disciplina e calcule a média
    Exiba uma mensagem associada a esta média:
        - se ela for maior ou igual a 7: exibir a mensagem "aprovado"
        - se ela for maior ou igual a 4 e menor que 7: exibir a mensagem "foi para a final"
        - sel ela for menor do que quatro: exibir a mensagem "reprovado"

*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    float nota1, nota2, nota3, media;

    printf("digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("diigite a segunda nota: ");
    scanf("%f", &nota2);

    printf("digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    if (media >= 7){
        printf("media final: %.1f - APROVADO!\n", media);
        exit(0);
    } 
    if (media >= 4 && media < 7){
        printf("media final: %.1f - FOI PARA A FINAL!\n", media);
    } else {
        printf("media final: %.1f - REPROVADO!", media);
     }

    return 0;
}