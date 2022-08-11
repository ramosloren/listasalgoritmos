#include <stdio.h>
#include <stdlib.h>

    //8. Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o pre�o normal de
    //etiqueta e a escolha da condi��o de pagamento. Utilize os c�digos da tabela a seguir para ler qual a condi��o
    //de pagamento escolhida e efetuar o c�lculo adequado.
    //C�digo Condi��o de pagamento
    //a) � vista em dinheiro ou cheque, recebe 10% de desconto
    //b) � vista no cart�o de cr�dito, recebe 15% de desconto
    //c) Em duas vezes, pre�o normal de etiqueta sem juros
    //d) Em duas vezes, pre�o normal de etiqueta mais juros de 10%

int main()
{
    float valor;
    char pagamento;

    printf("\nDigite o valor da etiqueta: R$ ");
    scanf("%f",&valor);

    printf("\nDigite 'a' para pagamento a vista ou no cheque, desconto de 10.\n");
    printf("\nDigite 'b' para pagamento a vista no cartao de credito, desconto de 15.\n");
    printf("\nDigite 'c' para pagamento em duas vezes, pre�o normal de etiqueta sem juros.\n");
    printf("\nDigite 'd' para pagamento em duas vezes, pre�o normal de etiqueta mais juros de 10.\n");
    printf("\nInforme a opcao desejada em letra minuscula: ");
    fflush(stdin);

    scanf("%c", &pagamento);

    if(pagamento =='a'){
        valor = valor*0.90;
        printf("\nValor a ser pago: R$ %.2f",valor);
    }else if(pagamento == 'b'){
        valor = valor*0.85;
        printf("\nValor a ser pago: R$ %.2f",valor);
    }else if(pagamento == 'c'){
        valor = valor/2;
        printf("\nValor a ser pago: R$ %.2f",valor);
    }else if(pagamento == 'd'){
        valor = valor*1.10/2;
        printf("\nValor a ser pago: R$ %.2f",valor);
    }else
        printf("\nOpcao invalido.");
}
