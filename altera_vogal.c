/*
4) Faça um programa em C que solicite ao usuário uma palavra 
(string) e depois altere a palavra para que todas as vogais maiúsculas sejam
substituídas por vogais minúsculas e vice-versa. Exiba a string resultante e
quantas vogais foram alteradas. Explique nos comentários todas as etapas;
*/

#include <stdio.h>
#include<string.h>
#include <ctype.h>

int main(void){

    char palavra[20], vogais;
    int i;

    printf("Digite uma palavra qualquer: ");
    scanf("%s", palavra);

    //inicio do contador para saber quais vogais serão mudadas
    for (i = 0; i < strlen(palavra); i++){
        switch (palavra[i]){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':{
            palavra [i] = toupper(palavra[i]); //de minúscula para maiúscula
            ++vogais;
        }
        break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':{
            palavra [i] = tolower(palavra[i]); //de maiúscula para minúscula
            ++vogais;
        }
        break;
        }   
        printf("%c", palavra[i]); // como a palavra ficou
    }
     printf("\nA quantidade de vogais alteradas foi de: %d", vogais);
    
    return 0;
}