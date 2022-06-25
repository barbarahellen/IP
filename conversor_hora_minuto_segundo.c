/*
    Escreva um programa que pergunte qual o tempo transcorrido 
    em um cronômetro em horas, minutos e segundos e transforme
    (e mostre) todo este tempo em segundos.
*/

#include <stdio.h>

int main(void){
    int ttHoras, ttMinutos, ttSegundos, totalSegundos;

    printf("digite a quantidade de horas transcorridas: ");
    scanf("%d", &ttHoras);

    printf("digite a quantidade de minutos transcorridos: ");
    scanf("%d", &ttMinutos);

    printf("digite a quantidade de segundos transcorridos: ");
    scanf("%d", &ttSegundos);

    totalSegundos = (ttHoras * 3600) + (ttMinutos * 60) + ttSegundos;

    printf("o total do tempo transcorrido em segundos = %d\n", totalSegundos);

    return 0;
}