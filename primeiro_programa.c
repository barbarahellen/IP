#include <stdio.h>
 
int versao;

int main(void) {
    // s = s0 + v * t
    // s e s0 - m
    //v = m/s
    //t - s 
    //formula fisica mecanica 

    float s, s0, v, t; 
    //pos. final, pos. inicial, velocidade, tempo

    versao = 1;
/*
    s0 = 10.5;
    v = 5.2;
    t = 60;
*/
    printf("digite a posicao inicial (em metros): ");
    scanf("%f", &s0);
    printf("digite a velocidade (em m/s): ");
    scanf("%f", &v);
    printf("digite o tempo transcorrido (em segundos): ");
    scanf("%f", &t);

    s = s0 + (v * t);
    
    printf ("\t10posicao inicial %.2f m\n", s0);
    printf("\tvelocidade %.2f m/s\n", v);
    printf ("\ttempo passado: %.2f s\n", t);
    printf("\t\tposicao final calculada: %.3f m \n", s);

    return 0;

} 