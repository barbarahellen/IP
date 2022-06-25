#include <stdio.h>

int main (void) {
    float media = 0;
    int quantidade;
    char inicial;


    quantidade = 100;
    media = 8.5;
    inicial = 'B';

    printf ("\tquantidade = %d \n\tMedia = %.2f\n", quantidade, media);
    printf ("caracteres como \\ %% \" \' precisam ser sinalizados\n");
    printf("caractere inicial: %c", inicial);
    
    
    return 0;
}


