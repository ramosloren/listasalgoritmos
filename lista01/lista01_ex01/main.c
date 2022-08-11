#include <stdio.h>
#include <stdlib.h>


    //1. A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo para ler as dimensões de um
    //terreno e depois exibir a área do terreno.

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
