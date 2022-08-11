#include <stdio.h>
#include <stdlib.h>

    //14. Num determinado Estado, para transferências de veículos, o DETRAN cobra uma taxa de 1% para carros
    //fabricados antes de 1990 e uma taxa de 1.5% para os fabricados de 1990 em diante, a taxa incide sobre o
    //valor de tabela do carro. Elabore um algoritmo que leia o ano e o valor de tabela do carro, calcule e informe o
    //imposto a ser pago.

int main()
{
    int ano;
    float valor, imposto;

    printf("\nDigite o ano de fabricacao do carro, com quatro digitos: ");
    scanf("%d", &ano);
    printf("\nDigite o valor de tabela do carro: R$ ");
    scanf("%f", &valor);

    if(ano < 1990)
        imposto = valor*0.010;

    if(ano >= 1990)
        imposto = valor*0.015;

    printf("O valor de imposto a ser pago e de R$ %.2f", imposto);
}
