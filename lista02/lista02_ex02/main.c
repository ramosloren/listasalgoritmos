#include <stdio.h>
#include <stdlib.h>

    //2. Faça um algoritmo para receber um número qualquer e informar na tela se é par ou ímpar.

int main()
{
    int a;
    printf("\nDigite um numero inteiro:");
    scanf("%d", &a);

    if( a % 2 == 0){
    printf("\nO numero e par");
        }else{
    printf("\nO numero e impar");
}
    return 0;
}
