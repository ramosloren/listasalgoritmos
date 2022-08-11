#include <stdio.h>
#include <stdlib.h>

    //5. Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para ler o preço do
    //litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu colocar no tanque.

int main()
{
    float preco;
    float total;
    double litros;

    printf("\nDigite o preco do litro da gasolina: R$ ");
    scanf("%f", &preco);
    printf("\nDigite o total pago pela gasolina: R$ ");
    scanf("%f", &total);

    litros=total/preco;

    printf("\nVoce abasteceu %.2lf litros de gasolina", litros);

    return 0;
}
