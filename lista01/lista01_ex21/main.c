#include <stdio.h>
#include <stdlib.h>

    //21. A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: lata de 350 ml, garrafa de 600 ml e
    //garrafa de 2 litros. Se um comerciante compra uma determinada quantidade de cada formato, faça um algoritmo para
    //calcular quantos litros de refrigerante ele comprou.

int main()
{
    float lata, garrafa1, garrafa2, total;

    printf("\nInforme a quantidade de latas compradas: ");
    scanf("%f", &lata);
    printf("\nInforme a quantidade de garrafas de 600 ml compradas: ");
    scanf("%f", &garrafa1);
    printf("\nInforme a quantidade de garrafas de 2 litros compradas: ");
    scanf("%f", &garrafa2);

    total = lata * 0.350 + garrafa1 * 0.600 + garrafa2 * 2;

    printf("\nA quantidade de refrigerantes comprados e de %.2f litros", total);
    return 0;
}
