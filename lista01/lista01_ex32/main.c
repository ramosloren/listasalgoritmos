#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Faça um algoritmo que receba o peso de uma pessoa em quilos,
    //calcule e mostre esse peso em gramas

    double peso_kg, peso_g;

    printf("\nDigite seu peso em quilogramas: ");
    scanf("%lf", &peso_kg);

    peso_g = peso_kg*1000;

    printf("A pessoa pesa %.2lf gramas", peso_g);
    return 0;
}
