#include <stdio.h>
#include <stdlib.h>

    //3. A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia.
    //Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou
    //com a venda dos pães e broas (juntos), e quanto deve guardar numa conta de poupança (10% do total arrecadado).
    //Você foi contratado para fazer os cálculos para o dono. Com base nestes fatos, faça um algoritmo
    //para ler as quantidades de pães e de broas, e depois calcular os dados solicitados

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
