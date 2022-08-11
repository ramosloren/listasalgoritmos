#include <stdio.h>
#include <stdlib.h>

//1. Faça um algoritmo que leia dois valores A e B e imprima o maior deles.

int main() {

    float A, B;

    printf("\nInsira um numero: ");
    scanf("%f", &A);
    printf("\nInsira um numero: ");
    scanf("%f", &B);

    if(A > B){
        printf("\nO maior numero e: %.2f", A);
    }else{
        printf("\nO maior numero e: %.2f", B);
    }

    return 0;
}
