#include <stdio.h>
#include <stdlib.h>

    //3. A padaria Hotp�o vende uma certa quantidade de p�es franceses e uma quantidade de broas a cada dia.
    //Cada p�ozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou
    //com a venda dos p�es e broas (juntos), e quanto deve guardar numa conta de poupan�a (10% do total arrecadado).
    //Voc� foi contratado para fazer os c�lculos para o dono. Com base nestes fatos, fa�a um algoritmo
    //para ler as quantidades de p�es e de broas, e depois calcular os dados solicitados

int main()
{
    int paofrances;
    int broa;
    float total;
    double poupanca;

    printf("\nPadaria Hotpao");
    printf("\nDigite a quantidade de paes franceses vendidos no dia: ");
    scanf("%d", &paofrances);
    printf("\nDigite a quantidade de broas vendidas no dia: ");
    scanf("%d", &broa);

    total=(paofrances*0.12)+(broa*1.50);
    poupanca=total*0.1;

    printf("\nO total arrecadado no dia e: R$ %.2f", total);
    printf("\nO valor a ser guardado na poupanca e: R$ %.2lf", poupanca);

    return 0;
}
