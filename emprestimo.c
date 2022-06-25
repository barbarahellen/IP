/* Faça um programa em C que simula as condições para a realização de um empréstimo bancário. O programa deve ler o valor de três variáveis em reais (float ou double): o valor do salário do cliente, o valor do empréstimo e o valor da prestação do empréstimo. Implemente as seguintes condições:
	- Se o valor da prestação for maior que 15% do salário, exibir: “Empréstimo não concedido”;
	- Se o valor do empréstimo for maior que 10x o salário do cliente, exibir: "Empréstimo não concedido";
	- Se o valor da prestação for menor que 1% do valor do empréstimo, exibir: "Empréstimo não concedido";
	- Caso as condições acima não se apliquem, exibir “Empréstimo concedido”.

	Posteriormente, caso o empréstimo seja concedido, faça o programa exibir em qual perfil de cobrança de juros que o cliente está:
	- Se o valor da prestação for menor que 5% do salário do cliente ou o valor do empréstimo for menor que 5x o salário do cliente: Perfil VIP;
	- Se o valor da prestação for maior que 5% do salário do cliente e menor que 10% do salário ou o valor do empréstimo for entre 5x e 8x o salário do cliente: Perfil Normal;
	- Caso as condições acima não se apliquem: Perfil de Risco;

	* Condição extra (+1 ponto): 
	- Se o valor do salário, da prestação ou do empréstimo inseridos forem menores ou iguais a zero, solicitar novamente todos os valores até que sejam válidos para então testar as condições do empréstimo.
*/

#include <stdio.h>

int main(void){
    float salario, valorEmp, vPrest;

    printf("Digite o valor do seu salario: ");
    scanf("%f", &salario);
    printf("Digite o valor do emprestimo: ");
    scanf("%f", &valorEmp);
    printf("Digite o valor da prestacao do emprestimo: ");
    scanf("%f", &vPrest);
 
//Condições para poder receber o empréstimo ou não.

    if (vPrest > (salario * 0.15)){
        printf("\tEmprestimo nao concedido");
    }
    if (valorEmp > (salario * 10)){
        printf("\tEmprestimo nao concedido");
    }
    if (vPrest < (valorEmp * 0.01)){
        printf("\tEmprestimo nao concedido");
    } else{                                       
        printf("\tEmprestimo concedido");       //caso possa receber, existem outras condições.
        if((vPrest < (salario * 0.05)) || (valorEmp < (salario * 5))){
            printf("\n\tPerfil VIP");
        }
        if (((vPrest > (salario * 0.05)) && (vPrest < (salario * 0.1))) ||
        ((salario * 5) <= valorEmp <= (salario * 8))){
            printf("\n\tPerfil Normal");
        } else{
            printf("\n\tPerfil de Risco");
        }

    }

    return 0;
}