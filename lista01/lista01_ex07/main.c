#include <stdio.h>
#include <stdlib.h>

    //7. Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o início do ano. Esqueça
    //a questão dos anos bissextos e considere sempre que um mês possui 30 dias.

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
