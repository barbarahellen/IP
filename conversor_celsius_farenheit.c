/*
Faça um programa que leia uma temperatura em graus Farenheit
e a imprima em graus Centígrados. A conversão de graus farenheit 
para centígrados é obtida por C = (5/9)(F-32).
*/

#include <stdio.h>

int main(void){

    double celsius, farenheit;

    printf("digite a temperatura em graus farenheit: ");
    scanf("%lf", &farenheit);

    celsius = (5.0/9 * (farenheit - 32));

    printf("a temperatura %lf C = %lf F\n", celsius, farenheit);


    return 0;
}
