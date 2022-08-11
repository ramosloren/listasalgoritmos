#include <stdio.h>
#include <stdlib.h>

    //15.Tr�s amigos, Carlos, Andr� e Felipe. decidiram rachar igualmente a conta de um bar. Fa�a um algoritmo para
    //ler o valor total da conta e imprimir quanto cada um deve pagar, mas fa�a com que Carlos e Andr� n�o paguem centavos.
    //Ex: uma conta de R$101,53 resulta em R$33,00 para Carlos, R$33,00 para Andr� e R$35,53 para Felipe.


int main()
{

    int divisao;
    float felipe, total;

    printf("\nDigite o valor total da conta: R$ ");
    scanf("%f", &total);

    //utilizando a opcao "int", o valor da divisao desconsidera os valores que dar�o virgula. Nesse caso, com a divis�o po 3 no inteiro,
    //teremos quanto Carlos e andr� devem pagar, cada um. Para saber o valor que esta a ser pago, faz por subtra��o, utilizando o float
    //(ou double) para pegar os centavos tamb�m.

    divisao = total/3;
    felipe = total - 2* divisao;

    printf("O total da conta e: R$ %.2f, resulta em R$ %d para Carlos, R$ %d para Andre e R$ %.2f para Felipe.", total, divisao, divisao, felipe);

    return 0;
}
