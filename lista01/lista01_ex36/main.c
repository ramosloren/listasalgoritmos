#include <stdio.h>
#include <stdlib.h>

int main()
{
    //36. Fa�a um algoritmo que receba o valor do sal�rio m�nimo e o valor do sal�rio de um funcion�rio, calcule e
    //mostre a quantidade de sal�rios m�nimos que ganha esse funcion�rio

    double salario_minimo, salario_funcionario, quant;

    printf("\nDigite o valor do salario minimo: R$ ");
    scanf("%lf", &salario_minimo);
    printf("\nDigite o valor do salario do funcionario: R$ ");
    scanf("%lf", &salario_funcionario);

    quant = salario_funcionario/salario_minimo;

    printf("\nO funcionario recebe %.2lf salarios minimos.", quant);

    return 0;
}
