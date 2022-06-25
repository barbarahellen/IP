#include <stdio.h>
#include <math.h>

/* Fazer um programa em C para ler dois numeros e um caractere
 contendo um dos simbolos das operações (+, -, *, / e ^) e imprimir
o resultado da operação efetuada sobre os numeros lidos usando o switch.
*/
int main (void){

    float numero1, numero2;
    char operacao;

    printf("digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("digite o segundo numero: ");
    scanf("%f", &numero2);

    printf("digite a operacao a ser realizada (+, -, *, / ou ^)");
    scanf("\n%c", &operacao);

    switch (operacao){
        case '+':{
            printf("\n\tSoma: %f\n", (numero1 + numero2));
            break; 
        }
        case '-':{
            printf("\n\tSubtracao: %f\n", (numero1 - numero2));
            break;
        }
        case '*':{
            printf("\n\tMultiplicacao: %f\n", (numero1 * numero2));
            break;
        }
        case '/':{
            printf("\n\tDivisao: %f\n", (numero1/numero2));
            break;
        }
        case '^':{
            printf("\n\tExponenciacao: %f\n", pow(numero1, numero2));
        }
        default:{
            printf("\n\tOperacao Invalida!");
        }

    }

    return 0;
}