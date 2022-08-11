#include <stdio.h>
#include <stdlib.h>

int main()
{
    //27. Faça um algoritmo que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo.
    //Sabe-se que o segundo número não pode ser zero, portanto não é necessário se preocupar com validações.

    double numero1, numero2, div;

    printf("\nDigite um numero: ");
    scanf("%lf", &numero1);
    printf("\nDigite um numero diferente de zero: ");
    scanf("%lf", &numero2);

    div = numero1/numero2;

    printf("O produto da divisao e: %.2lf", div);

    return 0;
}
