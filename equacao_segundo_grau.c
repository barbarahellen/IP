#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
    x = ax2 + bx + c = 0 
    Faça um programa que a partir dos coeficientes de uma equação
    do segundo grau você encontre a(s) sua(s) raíz(es).

    Utilize a fórmula de Bháskara:

        x = (-b +/- raiz(b2 - (4*a*c)))/2*a
*/
int main(void){

    float a, b, c, x1, x2, delta;

    printf("digite o coeficiente a: ");
    scanf("%f", &a);

    printf("digite o coeficiente b: ");
    scanf("%f", &b);

    printf("digite o coeficiente c: ");
    scanf("%f", &c);

    delta = (pow(b,2) - (4*a*c));

    if (delta < 0){
        printf("nao existem raizes reais para os coeficientes passados.");
        exit (0);
    }
    if (delta > 0){
        x1 = (-b + sqrtf(delta))/(2*a);

        x2 = (-b - sqrtf(delta))/(2*a);

        printf("o valor das raizes para os coeficientes passados: %f %f", x1, x2);
    } else {
        x1 = -b /(2*a);
        printf("o valor da raiz para os coeficientes passados: %f", x1);
    }
       
    return 0;
}