#include <stdio.h>
#include <stdlib.h>

    //4. Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo o resultado.

int main()
{
    float A;

    printf("\nInsira um numero: ");
    scanf("%f", &A);

    if (A > 0){
        printf("O dobro do valor e: %.2f", A*2);
    }else{
        printf("O triplo do valor e: %.2f", A*3);
               }
    return 0;
}
