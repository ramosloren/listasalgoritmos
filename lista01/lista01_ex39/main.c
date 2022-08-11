#include <stdio.h>
#include <stdlib.h>

int main()
{
    //39. João recebeu seu salário de R$1200.00 e precisa pagar duas contas (C1=R$200,00 e C2=R$120,00)que
    //estão atrasadas. Como as contas estão atrasadas, João terá que pagar multa de 2% sobre cada conta.
    //Faça um algoritmo que calcule e mostre quanto restará do salário do João

    double salario, C1, C2, juros, rest_salario;

    salario = 1200.00;
    C1 = 200.00;
    C2 = 120.00;
    juros = 0.02;
    rest_salario = salario - (C1*juros+C2*juros);

    printf("\nRestara do salario de Joao:R$ %.2lf", rest_salario);

    return 0;
}
