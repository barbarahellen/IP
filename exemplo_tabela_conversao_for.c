#include <stdio.h>

/*
Faça um programa que apresente na tela a tabela de conversão de graus celsius para farenheit, de -100C a 100C. Use um incremento de 10C.
obs: Farenheit = (9/5)*(celsius) + 32 
*/

int main (void){
    int valor_celsius, valor_farenheit;
    
    printf("tabela de conversao celsius / farenheit\n\n");

    for(valor_celsius = -100; valor_celsius <= 100; valor_celsius += 10){
        valor_farenheit = (valor_celsius*1.8)+32;
        printf("\t%d C = %d F\n", valor_celsius, valor_farenheit);
    }



    return 0;
}