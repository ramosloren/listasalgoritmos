#include <stdio.h>
#include <stdlib.h>

int main()
{
    //29. Faça um algoritmo que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se que este
    //sofreu um desconto de 10%.

    float preco, preco_desconto;

    printf("\nDigite o valor do produto: ");
    scanf("%f", &preco);

    preco_desconto= preco - (preco*0.1);

    printf("/nO valor do produto com desconto e: R$ %.2f", preco_desconto);

    return 0;
}
