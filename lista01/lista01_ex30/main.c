#include <stdio.h>
#include <stdlib.h>

    //30. Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um algoritmo que receba
    //o salário fixo de um funcionário e o valor de suas vendas, calcule e mostre a comissão e o salário final do
    //funcionário.

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
