#include <stdio.h>
#include <stdlib.h>

    //3. Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais deverá se somar os dois,
    //caso contrário multiplique A por B. Ao final, apresente o resultado.

int main()
{
    int A, B;

    printf("\nInsira um numero inteiro: ");
    scanf("%d", &A);
    printf("\nInsira um numero inteiro: ");
    scanf("%d", &B);

    if (A == B){
        printf("A soma dos valores e: %d", A+B);
    }else{
        printf("O produto da multiplicacao e: %d", A*B);
               }
    return 0;
}
