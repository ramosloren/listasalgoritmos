#include <stdio.h>
#include <stdlib.h>

    //7. Entrar com o dia e o m�s de uma data e informar quantos dias se passaram desde o in�cio do ano. Esque�a
    //a quest�o dos anos bissextos e considere sempre que um m�s possui 30 dias.

int main()
{
    int dia, mes, ano;

    printf("\n Digite o dia, com dois digitos: ");
    scanf("%d", &dia);
    printf("\n Digite o mes, com dois digitos: ");
    scanf("%d", &mes);
    printf("\n Digite o dia, com quatro digitos: ");
    scanf("%d", &ano);

    printf("Ja se passaram %d dias do ano %d", dia+mes*30, ano);

    return 0;
}
