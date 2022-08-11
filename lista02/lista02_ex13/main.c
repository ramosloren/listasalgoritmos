#include <stdio.h>
#include <stdlib.h>

    //13. Escrever um algoritmo que leia um valor em reais e calcule qual o menor número possível de notas de 100,
    //50, 10, 5 e 1 em que o valor lido pode ser decomposto. Escrever o valor lido e a relação de notas necessárias.

int main()
{
    float valor, centavos;
    int resto, nota100=0, nota50=0, nota10=0, nota5=0, nota1=0;

    printf("\nDigite o valor: R$");
    scanf("%f", &valor);

    resto = valor;

    if(resto >= 100)
    {
        nota100 = resto/100;
        resto = resto - nota100*100;
        printf("\nNotas de R$100: %d\n", nota100);
    }
    if(resto >= 50)
    {
        nota50 = resto/50;
        resto = resto - nota50*50;
        printf("\nNotas de R$50: %d\n", nota50);
    }
    if(resto >= 10)
    {
        nota10 = resto/10;
        resto = resto - nota10*10;
        printf("\nNotas de R$10: %d\n", nota10);
    }
    if(resto >= 5)
    {
        nota5 = resto/5;
        resto = resto - nota5*5;
        printf("\nNotas de R$5: %d\n", nota5);
    }
    if(resto >= 1)
    {
        nota1 = resto/1;
        resto = resto - nota1*1;
        printf("\nNotas de R$1: %d\n", nota1);
    }
    if(valor - nota100*100-nota50*50-nota10*10-nota5*5-nota1*1 >= 0.1)
    {
        centavos = valor - nota100*100-nota50*50-nota10*10-nota5*5-nota1*1;
        printf("\nCentavos: %.2f", centavos);
    }
}
