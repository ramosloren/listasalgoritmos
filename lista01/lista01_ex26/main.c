#include <stdio.h>
#include <stdlib.h>

int main()
{
    //26. Fa�a um algoritmo que receba tr�s n�meros, calcule e mostre a multiplica��o desses n�meros.

    double num1, num2, num3, multi;

    printf("\nInsira um numero: ");
    scanf("%lf", &num1);
    printf("\nInsira um numero: ");
    scanf("%lf", &num2);
    printf("\nInsira um numero: ");
    scanf("%lf", &num3);

    multi = num1 * num2 * num3;

    printf("\nO resultado da multiplicacao e: %.2lf", multi);

    return 0;
}
