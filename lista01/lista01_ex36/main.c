#include <stdio.h>
#include <stdlib.h>

int main()
{
    //36. Faça um algoritmo que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e
    //mostre a quantidade de salários mínimos que ganha esse funcionário

    double salario_minimo, salario_funcionario, quant;

    printf("\nDigite o valor do salario minimo: R$ ");
    scanf("%lf", &salario_minimo);
    printf("\nDigite o valor do salario do funcionario: R$ ");
    scanf("%lf", &salario_funcionario);

    quant = salario_funcionario/salario_minimo;

    printf("\nO funcionario recebe %.2lf salarios minimos.", quant);

    return 0;
}
