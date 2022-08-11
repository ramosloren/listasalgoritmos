#include <stdio.h>
#include <stdlib.h>

    //22. Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu poupar.
    //Faça um algoritmo para ler a quantidade de cada tipo de moeda, e imprimir o valor total economizado, em reais.
    //Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Não havendo moeda de
    //um tipo, a quantidade respectiva é zero

int main()
{

    double c1, c5, c10, c25, c50, r1, total;

    printf("\nDigite a quantidade de moedas de 1 centavo: ");
    scanf("%lf", &c1);
    printf("\nDigite a quantidade de moedas de 5 centavos: ");
    scanf("%lf", &c5);
    printf("\nDigite a quantidade de moedas de 10 centavos: ");
    scanf("%lf", &c10);
    printf("\nDigite a quantidade de moedas de 25 centavos: ");
    scanf("%lf", &c25);
    printf("\nDigite a quantidade de moedas de 50 centavos: ");
    scanf("%lf", &c50);
    printf("\nDigite a quantidade de moedas de 1 real: ");
    scanf("%lf", &r1);

    total = c1*0.01 + c5*0.05 + c10*0.10 + c25*0.25 + c50*0.50 + r1*1.00;

    printf("\nO valor total economizado e de R$%.2lf", total);

    return 0;
}
