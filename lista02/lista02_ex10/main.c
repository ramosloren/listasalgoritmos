#include <stdio.h>
#include <stdlib.h>

    //10. Elabore um algoritmo que leia dois n�meros inteiros e mostre o resultado da diferen�a do maior valor pelo
    //menor;

int main()
{
    int A, B;

    printf("\nInsira um numero inteiro: ");
    scanf("%d", &A);
    printf("\nInsira um numero inteiro: ");
    scanf("%d", &B);

    if(A >= B){
        printf("\nO resultado da diferenca e: %d", A-B);
    }else{
        if (B >= A){
        printf("\nO resultado da diferenca e: %d", B-A);
    }
    }

    return 0;
}
