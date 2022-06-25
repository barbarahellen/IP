/* Faça um programa C para calcular o número de lâmpadas necessárias para iluminar uma sala. O programa deverá inicialmente ler um conjunto de valores: potência da lâmpada em watts (int), tipo da sala (char), altura, largura e comprimento da sala em metros (float ou double). Para cada tipo de cômodo, a quantidade de watts por metro cúbico necessária é especificada na Tabela abaixo:

+--------------+--------------------------------+
| Tipo da sala | Potência necessária (watts/m3) |
+--------------+--------------------------------+
| A            |                            8.5 |
| B            |                           11.3 |
| C            |                           15.0 |
| D            |                           18.8 |
| E            |                           22.0 |
+--------------+--------------------------------+

Apresente, depois de lidas as informações, a quantidade de lâmpadas com a potência informada necessárias para se iluminar a sala considerada (de acordo com o volume da sala calculado). Caso o usuário digite alguma informação inválida, uma mensagem de erro deve ser exibida.

Descreva (em alto nível) o que acontece durante a execução do programa, relacionando os eventos que o programa realiza aos componentes de um computador (memória, processador, barramento etc.) que os dão suporte.

* A quantidade de lâmpadas deve ser apresentada como um valor inteiro. Utilize a função apropriada da biblioteca math.h para realizar o arredondamento dos valores quando necessário.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){

    int potencia;
    char sala;
    float alt, larg, comp, volume;

    printf("Digite a potencia da lampada: ");
    scanf("%d", &potencia);
    printf("Digite a altura da sala (em metros): ");
    scanf("%f", &alt);
    printf("Digite a largura da sala (em metros): ");
    scanf("%f", &larg);
    printf("Digite o comprimento da sala (em metros): ");
    scanf("%f", &comp);
    printf("Digite o tipo de sala: ");
    scanf("\n%c", &sala);

    volume = comp * alt * larg;

    switch (sala){
        case 'A':{
            printf("o numero de lampadas necessarias para iluminar a sala A e %.2f: ", ceil(volume/8.5));
            break;
        }
        case 'B':{
            printf("o numero de lampadas necessarias para iluminar a sala B e %.2f: ", ceil(volume/11.3));
            break;
        }
        case 'C':{
            printf("o numero de lampadas necessarias para iluminar a sala C e %.2f: ", ceil(volume/15));
            break;
        }
        case 'D':{
            printf("o numero de lampadas necessarias para iluminar a sala D e %.2f: ", ceil(volume/18.8));
            break;
        }
        case 'E':{
            printf("o numero de lampadas necessarias para iluminar a sala E e %.2f: ", ceil(volume/22));
            break;
        }
        default: {
            printf("ERRO - Informacao Invalida");
        }

    }


    return 0;
}
