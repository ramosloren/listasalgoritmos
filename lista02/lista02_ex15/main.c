#include <stdio.h>
#include <stdlib.h>

    //15. Uma empresa conceder� um aumento de sal�rio aos seus funcion�rios, vari�vel de acordo com o cargo,
    //conforme a tabela abaixo. Fa�a um algoritmo que leia o sal�rio e o cargo de um funcion�rio e calcule o novo sal�rio.
    //Se o cargo do funcion�rio n�o estiver na tabela, ele dever�, ent�o, receber 40% de aumento. Mostre o
    //sal�rio antigo, o novo sal�rio e a diferen�a.
    //C�digo Cargo Percentual
    //101 Gerente 10%
    //102 Engenheiro 20%
    //103 T�cnico 30%

int main()
{
    int cargo;
    float salario, novo, diferenca;

    printf("\nDigite o salario do funcionario: R$ ");
    scanf("%f", &salario);

    printf("\nSelecione o cargo \n");
    printf("\nDigite 101: Gerente. \n");
    printf("\nDigite 102: Engenheiro. \n");
    printf("\nDigite 103: Tecnico. \n");
    printf("\nO cargo e: ");
    scanf("%d", &cargo);

    switch(cargo){
        case 101:
        novo = salario * 1.1;
        diferenca = salario * 0.1;
        break;
        case 102:
        novo = salario * 1.2;
        diferenca = salario * 0.2;
        break;
        case 103:
        novo = salario * 1.3;
        diferenca = salario * 0.3;
        break;
        default:
        novo = salario * 1.4;
        diferenca = salario * 0.4;
        }
     printf("\nNovo Salario: R$ %.2f \n", novo);
     printf("\nSalario Antigo: R$ %.2f \n", salario);
     printf("\nValor Aumento: R$ %.2f \n", diferenca);
}
