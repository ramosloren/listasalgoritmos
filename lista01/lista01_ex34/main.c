#include <stdio.h>
#include <stdlib.h>

int main()
{
    //34. Faça um algoritmo que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado;

    double lado, area;

    printf("\nDigite o valor do lado do quadrado em centimetros: ");
    scanf("%lf", &lado);

    area = lado * lado;

    printf("A area do quadrado e: %.2lf centimetros quadrados", area);

    return 0;
}
