#include <stdio.h>
#include <stdlib.h>

    //9. Uma f�brica de camisetas produz os tamanhos pequeno, m�dio e grande,
    //cada uma sendo vendida respectivamente por 10, 12 e 15 reais.
    //Construa um algoritmo em que o usu�rio forne�a a quantidade de camisetas
    //pequenas, m�dias e grandes referentes a uma venda, e a m�quina informe quanto ser� o valor arrecadado.

int main()
{
    int P,M,G;

    printf("\nDigite a quantidade de camisetas P vendidas: ");
    scanf("%d", &P);
    printf("\nDigite a quantidade de camisetas M vendidas: ");
    scanf("%d", &M);
    printf("\nDigite a quantidade de camisetas G vendidas: ");
    scanf("%d", &G);

    printf("\nO valor total arrecadado e %d reais", P*10+M*12+G*15);
    return 0;
}
