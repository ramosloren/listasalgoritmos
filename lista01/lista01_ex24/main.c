#include <stdio.h>
#include <stdlib.h>

    //24. Um tonel de refresco � feito com 8 partes de �gua mineral e 2 partes de suco de maracuj�.
    //Fa�a um algoritmo para calcular quantos litros de �gua e de suco s�o necess�rios para se fazer
    //X litros de refresco (informados pelo usu�rio);

int main()
{

    double agua, suco, total;

    printf("\nInsira a quantidade total de refresco (em litros): ");
    scanf("%lf", &total);

    agua = total*0.8;
    suco = total*0.2;

    printf("\nSao necessarios %.2lf litros de agua para %.2lf litros de suco de maracuja, para fazer %.2lf litros de suco", agua, suco, total);
    return 0;
}
