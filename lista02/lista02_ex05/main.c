#include <stdio.h>
#include <stdlib.h>

    //5. Fa�a um algoritmo que leia uma vari�vel e some 5 caso seja par ou some 8 caso seja �mpar, imprimir o resultado desta opera��o.

int main()
{
    int a;
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &a);

    if( a % 2 == 0){
    printf("\nO resultado da soma e: %d", a+5);
        }else{
    printf("\nO resultado da soma e: %d", a+8);
}
    return 0;
}
