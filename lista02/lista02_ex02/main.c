#include <stdio.h>
#include <stdlib.h>

    //2. Fa�a um algoritmo para receber um n�mero qualquer e informar na tela se � par ou �mpar.

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
