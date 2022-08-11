#include <stdio.h>
#include <stdlib.h>

    //16. A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio inclui duas fatias de queijo, uma
    //fatia de presunto e uma rodela de hambúrguer. Sabendo que cada fatia de queijo ou presunto pesa 50 gramas,
    //e que a rodela de hambúrguer pesa 100 gramas, faça um algoritmo em que o dono forneça a quantidade de sanduíches
    //a fazer, e a máquina informe as quantidades (em quilos) de queijo, presunto e carne necessários para compra.

int main()
{
    int sanduiches;
    float carne, queijo_presunto;

    printf("Informe a quantidade de sanduiches a fazer: ");
    scanf("%d", &sanduiches);

    //atentar para a unidade de medida de gramas para kg
    carne = sanduiches * 0.05;
    queijo_presunto = sanduiches * 0.1;

    printf("E necessario comprar: %.2f kg de queijo, %.2f kg de presunto e %.2f kg de carne", queijo_presunto, queijo_presunto, carne);

    return 0;
}
