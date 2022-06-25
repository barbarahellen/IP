#include <stdio.h>

/*
Fulano tem 1,50 metro e cresce 2 centimetros por ano, enquanto Ciclano tem 1,10 metro e cresce 3 centimetros por ano. Construa um programa quqe calcule e imprima quantos anos serão necessarios para que Ciclano seja maior que Fulano.
*/

int main (void){

    float altura_fulano, altura_ciclano;
    int anos_necessarios;

    altura_fulano = 1.5;
    altura_ciclano = 1.1;
    anos_necessarios = 0;

    while (altura_fulano > altura_ciclano) {
        //altura_fulano = altura_fulano + 0.02;
        altura_fulano += 0.02;
        //altura_ciclano = altura_ciclano + 0.03;
        altura_ciclano += 0.03;
        anos_necessarios++;
   }
   printf("altura final de fulano: %.2f\n", altura_fulano);
   printf("altura final de ciclano %.2f\n", altura_ciclano);
   printf("foram necessarios %d anos para ciclano passar fulano\n", anos_necessarios);




    return 0;
}