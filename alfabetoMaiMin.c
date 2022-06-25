#include <stdio.h>

/*
    Faça um programa em C que exiba o alfabeto maiusculo e minusculo 
    apresentando tambem os códigos ASCII de cada caractere  
*/

int main(void) {

    unsigned char c;
    unsigned int i;

    for (i = 65; i <= 90; i++) {
        c = (char) i;
        printf("%c - %d\n", c, c);
    }

    printf("\n");
    
    for (i = 97; i <= 122; i++) {
        c = (char) i;
        printf("%c - %d\n", c, c);
    }

    return 0;
}