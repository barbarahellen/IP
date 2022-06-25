#include<stdio.h>
/*
Uma loja fornece 10% de desconto para funcionários e 5% de desconto
    para clientes vips. Faça um programa que calcule o valor total a ser
    pago por uma pessoa. O programa deverá ler o valor total da compra
    efetuada e um código que identifique se o comprador é:
        - cliente comum (1)
        - funcionário (2) 
        - vip (3)
*/

int main (void){
    float valorCompra;
    int codigoCliente;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valorCompra);

    printf("Digite o codigo do cliente: ");
    scanf("%d", &codigoCliente);

    switch (codigoCliente) {
        case 1: {
            printf("\n\tCodigo: Cliente comum");
            printf("\n\tValor final para a compra: %f", valorCompra);
            break;
        }
        case 2: {
            printf("\n\tCodigo: Funcionario");
            printf("\n\tValor final para a compra: %f", valorCompra - (valorCompra*0.1));
            break;
        }
        case 3: {
            printf("\n\tCodigo: Cliente VIP");
            printf("\n\tValor final para compra: %f", valorCompra - (valorCompra*0.05));
            break;
        }
        default: {
            printf("\n\tCodigo do cliente invalido!\n");
        }

    }


    return 0;
}