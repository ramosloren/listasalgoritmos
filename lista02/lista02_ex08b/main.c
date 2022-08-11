#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    //8. Elabore um algoritmo que calcule o que deve ser pago por um produto,
    //considerando o pre�o normal de etiqueta e a escolha da condi��o de pagamento.
    //Utilize os c�digos da tabela a seguir para ler qual a condi��o
    //de pagamento escolhida e efetuar o c�lculo adequado.
    //C�digo Condi��o de pagamento
    //a) � vista em dinheiro ou cheque, recebe 10% de desconto
    //b) � vista no cart�o de cr�dito, recebe 15% de desconto
    //c) Em duas vezes, pre�o normal de etiqueta sem juros
    //d) Em duas vezes, pre�o normal de etiqueta mais juros de 10%

int main(){
   setlocale(LC_ALL, "Portuguese");
    int opcao;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    float totalConta = 0;

        printf("--------Condi��o de pagamento------\n");
        printf("a - � vista em dinheiro ou cheque\n");
        printf("b - � vista no cart�o\n");
        printf("c - Em duas vezes, pre�o normal de etiqueta sem juros\n");
        printf("d - Em duas vezes, pre�o normal de etiqueta mais juros de 10%\n");
        printf("---------------------------------\n");
        printf("Digite sua escolha: ");
        scanf("%d", &opcao);


        switch(opcao) {
            case 1:
                printf("Voc� escolheu a op��o 1\n");
                printf("Adicionado em sua conta R$ 12,00\n");
                totalConta += 12;
                nOpcao1++;
                break;
            case 2:
                printf("Voc� escolheu a op��o 2\n");
                printf("Adicionado em sua conta R$ 15,00\n");
                totalConta += 15;
                nOpcao2++;
                break;
            case 3:
                printf("Voc� escolheu a op��o 3\n");
                printf("Adicionado em sua conta R$ 5,50\n");
                totalConta += 5.5;
                nOpcao3++;
                break;
            case 4:
                printf("Detalhes da conta:\n");
                printf("%d x Op��o 1 (valor unit�rio R$ 12,00) = R$ %.2f\n", nOpcao1, nOpcao1*12.0);
                printf("%d x Op��o 2 (valor unit�rio R$ 15,00) = R$ %.2f\n", nOpcao2, nOpcao2*15.0);
                printf("%d x Op��o 3 (valor unit�rio R$  5,50) = R$ %.2f\n", nOpcao3, nOpcao3*5.5);
                printf("Sua conta deu um total de: R$ %.2f\n", totalConta);
                break;
            default:
                printf("OP��O INV�LIDA!\n");
        }
    } while(opcao != 4);


    return 0;
}
