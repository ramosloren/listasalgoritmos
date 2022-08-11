#include <stdio.h>
#include <stdlib.h>

    //12. Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%.
    //Após o aumento, desconte 8% de impostos. Imprima o salário inicial,
    //o salário com o aumento e o salário final.

int main()
{

    double salario, aumento, desconto;

    printf("Digite o salario: \n");
    scanf("%lf", &salario);

    aumento = salario + salario * 0.15;
    desconto = aumento - aumento * 0.08;

    printf("O salario inicial e R$ %.2lf apos aumento e R$ %.2lf com o desconto dos impostos e R$ %.2lf.", salario, aumento, desconto);

    return 0;
}
