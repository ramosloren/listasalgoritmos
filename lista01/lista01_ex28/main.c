#include <stdio.h>
#include <stdlib.h>

int main()
{
    //28. Faça um algoritmo que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando
    //peso 2 para a primeira nota e peso 3 para a segunda nota.

    float nota1, nota2, media_p;

    printf("\nInsira a nota 1: ");
    scanf("%f", &nota1);
    printf("\nInsira a nota 2: ");
    scanf("%f", &nota2);

    media_p = ((nota1*2 + nota2*3) / (2+3));

    printf("A media ponderada e: %.1f", media_p);

    return 0;
}
