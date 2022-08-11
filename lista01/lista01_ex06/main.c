#include <stdio.h>
#include <stdlib.h>

    //6. O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. Escreva um algoritmo que leia o
    //peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. Assuma que a balança já desconte
    //o peso do prato.

int main()
{
    float peso;
    float preco;

    printf("\nDigite o peso do prato em quilogramas: ");
    scanf("%f", &peso);

    preco=peso*12;

    printf("\nO total a pagar e: R$ %.2f", preco);

    return 0;
}
