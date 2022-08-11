#include <stdio.h>
#include <stdlib.h>

    //6. Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em ordem decrescente.

int main()
{
    int a, b, c;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &a);
    printf("\nDigite um numero inteiro, diferente do primeiro: ");
    scanf("%d", &b);
    printf("\nDigite um numero inteiro, diferente dos outros ja informados: ");
    scanf("%d", &c);

    if(a>b && a>c && b>c){
        printf("%d, %d, %d", a,b,c);

    }else if(a>b && a>c && c>b){
            printf("%d, %d, %d", a,c,b);

    }else if(b>a && b>c && a>c){
            printf("%d, %d, %d", b,a,c);

    }else if(b>a && b>c && c>a){
            printf("%d, %d, %d", b,c,a);

    }else if(c>a && c>b && a>b){
            printf("%d, %d, %d", c,a,b);

    }else if(c>a && c>b && b>a){
            printf("%d, %d, %d", c,b,a);
        }
    return 0;
}
