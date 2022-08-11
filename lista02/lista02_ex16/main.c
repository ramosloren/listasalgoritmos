#include <stdio.h>
#include <stdlib.h>

    //16. Um banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último ano. Faça
    //um algoritmo que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela abaixo.
    //Mostre uma mensagem informando o saldo médio e o valor do crédito.
    //Saldo Médio Percentual
    //De 0 a 200 Nenhum crédito
    //De 201 a 400 20%
    //De 401 a 600 30%
    //Acima de 601 40%

int main()
{

    float saldo_medio, credito;

    printf("\nDigite o saldo medio do ultimo ano: R$ ");
    scanf("%f", &saldo_medio);

    if (saldo_medio < 0)
        printf("Valor invalido.");
    if (saldo_medio <= 200)
        credito = 0;
    if (saldo_medio <= 400)
        credito = saldo_medio*0.2;
    if (saldo_medio <= 600)
        credito = saldo_medio*0.3;
    else credito = saldo_medio*0.4;

    printf("\nO saldo medio e R$ %.2f e o valor do credito e R$ %.2f\n", saldo_medio, credito);

}
