#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float Primeiro, Segundo, Calculo, Calculo2, Media;
    printf("Qual a nota da primeira VA? ");
    scanf("%f", &Primeiro);
    fflush(stdin);
    printf("\nQual a nota da segunda VA? ");
    scanf("%f", &Segundo);
    fflush(stdin);
    Calculo = Primeiro * 2;
    Calculo2 = Segundo * 3;
    Media = (Calculo + Calculo2) / 5;
    printf("\nA sua media e: %f", Media);
    return 0;
}