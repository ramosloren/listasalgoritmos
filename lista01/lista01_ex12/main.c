#include <stdio.h>
#include <stdlib.h>

    //12. Fa�a um algoritmo para ler o sal�rio de um funcion�rio e aument�-Io em 15%.
    //Ap�s o aumento, desconte 8% de impostos. Imprima o sal�rio inicial,
    //o sal�rio com o aumento e o sal�rio final.

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
