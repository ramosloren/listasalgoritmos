#include <stdio.h>
#include <stdlib.h>

    //11. Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um algoritmo para
    //converter este tempo em anos, meses e dias. Assuma que cada mês possui sempre 30 dias.

int main()
{
    int anos, meses, dias;

    printf("\nDigite o numero de dias: ");
    scanf("%d", &dias);

    anos = dias/360;
    meses = dias/30 - (anos*12);
    dias = dias%30;
    // para saber o resto da divisão dos meses de 30 dias, será "lido" os dias colodando o % antes do total de dias da divisão,
    //nesse caso que considera 30 dias do mÊs.

    printf("Esta fabrica esta a %d anos, %d meses e %d dias sem acidentes", anos, meses, dias);

    return 0;
}
