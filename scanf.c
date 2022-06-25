#include <stdio.h>

int main(void) {

    int quantidade;
    float media;

     printf ("digite uma quantidade e a media: ");
     scanf ("%d %f", &quantidade, &media);

     printf ("quantidade inserida pelo usuario: %d, e a media: %.1f", quantidade, media);
     


    return 0;
}