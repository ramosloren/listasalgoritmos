#include <stdio.h>
#include <stdlib.h>

int main()
{
    //27. Fa�a um algoritmo que receba dois n�meros, calcule e mostre a divis�o do primeiro n�mero pelo segundo.
    //Sabe-se que o segundo n�mero n�o pode ser zero, portanto n�o � necess�rio se preocupar com valida��es.

    double numero1, numero2, div;

    printf("\nDigite um numero: ");
    scanf("%lf", &numero1);
    printf("\nDigite um numero diferente de zero: ");
    scanf("%lf", &numero2);

    div = numero1/numero2;

    printf("O produto da divisao e: %.2lf", div);

    return 0;
}
