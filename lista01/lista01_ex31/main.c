#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
    //a. o novo peso se a pessoa engordar 15% sobre o peso digitado;
    //b. o novo peso se a pessoa emagrecer 20% sobre o peso digitado.

    double peso, engorda, emagrece;

    printf("\nDigite o seu peso em quilogramas: ");
    scanf("%lf", &peso);

    engorda = peso+peso*0.15;
    emagrece = peso-peso*0.20;

    printf("\nSe voce engordar 15 por cento, pesara %.2lf kg. \n\nSe voce emagrecer 20 por cento, pesara %.2lf kg.\n", engorda, emagrece);

    return 0;
}
