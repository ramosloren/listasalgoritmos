#include <stdio.h>
#include <stdlib.h>

    //30. Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas. Fa�a um algoritmo que receba
    //o sal�rio fixo de um funcion�rio e o valor de suas vendas, calcule e mostre a comiss�o e o sal�rio final do
    //funcion�rio.

int main()
{

    double salario_fixo, vendas, comissao, salario_total;

    printf("\nDigite o valor do salario fixo: ");
    scanf("%lf", &salario_fixo);
    printf("\nDigite o valor das vendas: ");
    scanf("%lf", &vendas);

    comissao = vendas*0.04;
    salario_total = salario_fixo + comissao;

    printf("O valor da comissao das vendas e: R$ %.2lf \nO valor do salario final e: R$ %.2lf", comissao, salario_total);


    return 0;
}
