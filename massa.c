/*
1) Um determinado material radioativo perde metade de sua massa
a cada 50 segundos. Faça um programa em C que pergunte a massa inicial (float),
em gramas, e calcule o tempo necessário para que essa massa do material se 
torne menor que 0,5 grama. O programa em C deve apresentar a massa inicial, a 
massa final e o tempo em segundos. Explique nos comentários como funciona
a estrutura de repetição utilizada;
*/

#include <stdio.h>
int main(void){

    float massa_inicial, massa_final;
    int tempo;
    //informação necessária para o cálculo
    printf("Digite a massa inicial do material radioativo (em gramas): ");
    scanf("%f", &massa_inicial);

    massa_final = massa_inicial;  //início
    tempo = 0; 

    while (massa_final >= 0.5){
       massa_final = massa_final/2; //massa final é a metade dela a cada 50 segundos
       tempo += 50;
    }
    printf("A massa final e de: %.2f gramas\n", massa_final);
    printf("O tempo necessario foi de: %d segundos\n", tempo);

    return 0;

/*
A estrutura de repetição while permite que você especifique que uma ação seja repetida enquanto alguma condição permanecer verdadeira. A instrução contida na estrutura de repetição while constitui o corpo do while. Eventualmente, a condição se tornará falsa quando o último item tiver sido feito. Nesse ponto, a repetição terminará.
*/
}
