#include <stdio.h>
#include <stdlib.h>


    //1. A imobili�ria Im�bilis vende apenas terrenos retangulares. Fa�a um algoritmo para ler as dimens�es de um
    //terreno e depois exibir a �rea do terreno.

int main()
{
    float comprimento;
    float largura;

    printf("\nDigite o comprimento em metros: ");
    scanf("%f", &comprimento);
    printf("\nDigite a largura em metros: ");
    scanf("%f", &largura);
    printf("\nA area do terreno e: %.2f metros quadrados", comprimento*largura);

    return 0;
}
