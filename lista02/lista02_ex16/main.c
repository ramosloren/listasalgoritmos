#include <stdio.h>
#include <stdlib.h>

    //16. Um banco conceder� um cr�dito especial aos seus clientes, vari�vel com o saldo m�dio no �ltimo ano. Fa�a
    //um algoritmo que leia o saldo m�dio de um cliente e calcule o valor do cr�dito de acordo com a tabela abaixo.
    //Mostre uma mensagem informando o saldo m�dio e o valor do cr�dito.
    //Saldo M�dio Percentual
    //De 0 a 200 Nenhum cr�dito
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
