#include <stdio.h>
#include <stdlib.h>

    //24. Um tonel de refresco é feito com 8 partes de água mineral e 2 partes de suco de maracujá.
    //Faça um algoritmo para calcular quantos litros de água e de suco são necessários para se fazer
    //X litros de refresco (informados pelo usuário);

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
