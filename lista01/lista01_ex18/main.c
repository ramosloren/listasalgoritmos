#include <stdio.h>
#include <stdlib.h>

    //18. A empresa Hipotheticus paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra.
    //Fa�a um algoritmo para calcular e imprimir o sal�rio bruto e o sal�rio l�quido de um determinado funcion�rio.
    //Considere que o sal�rio l�quido � igual ao sal�rio bruto descontando-se 10% de impostos.

int main()
{
    float horas, extras, total;

    printf("\nInforme a quantidade de horas trabalhadas (carga horaria padrao): ");
    scanf("%f", &horas);
    printf("\nInforme a quantidade de horas extras trabalhadas: ");
    scanf("%f", &extras);

    total = horas * 10 + extras * 15;

    //para descontar 10% do salario, pode-se multiplicar direto por 0.9... que ser� o resultado do menos -0.1
    printf("O salario bruto e R$ %.2f e o salario liquido e R$ %.2f", total, total*0.9);
    return 0;
}
