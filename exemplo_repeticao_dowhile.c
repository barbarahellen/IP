#include <stdio.h>

int main (void){

    int numero, maior, contador;
  
    contador = 0;

    /*
    do{
        //...
    } while (condicao)
    */
  
    do{
        contador++;
        printf("digite um numero [%d]: ", contador);
        scanf("%d", &numero); 
        if (numero > maior)
            maior = numero;

    } while (numero != 0);

    printf("voce digitou %d numero(s) e o maior foi %d\n", contador, maior);    



    return 0;
}