#include <stdio.h>
#include <stdlib.h>

int main()
{
    //35. Faça um algoritmo que calcule e mostre a área de um losango.
    //Sabe-se que: A = (diagonal_maior * diagonal_menor)/2;

    double area_losango, diagonal_maior, diagonal_menor;

    printf("\nDigite o valor da diagonal maior do losango em centimetros: ");
    scanf("%lf", &diagonal_maior);
    printf("\nDigite o valor da diagonal menor do losango em centimetros: ");
    scanf("%lf", &diagonal_menor);

    area_losango = (diagonal_maior*diagonal_menor)/2;

    printf("\nA area do losango e: %.2lf centimetros quadrados", area_losango);

    return 0;
}
