#include <stdio.h>

int main (void){

    int numero;
    
    printf("digite um numero em hexadecimal (ex: 0x0010) ou em octal (ex: 0144): ");
    scanf("%i", &numero);
    printf("numero em decimal: %d\n", numero);
    printf("numero em octal: %o\n", numero);
    printf("numero em hexadecimal: %x\n", numero);


    return 0;
}