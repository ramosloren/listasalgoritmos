#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    //8. Elabore um algoritmo que calcule o que deve ser pago por um produto,
    //considerando o preço normal de etiqueta e a escolha da condição de pagamento.
    //Utilize os códigos da tabela a seguir para ler qual a condição
    //de pagamento escolhida e efetuar o cálculo adequado.
    //Código Condição de pagamento
    //a) À vista em dinheiro ou cheque, recebe 10% de desconto
    //b) À vista no cartão de crédito, recebe 15% de desconto
    //c) Em duas vezes, preço normal de etiqueta sem juros
    //d) Em duas vezes, preço normal de etiqueta mais juros de 10%

int main(){
   setlocale(LC_ALL, "Portuguese");
    int opcao;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    float totalConta = 0;

        printf("--------Condição de pagamento------\n");
        printf("a - À vista em dinheiro ou cheque\n");
        printf("b - À vista no cartão\n");
        printf("c - Em duas vezes, preço normal de etiqueta sem juros\n");
        printf("d - Em duas vezes, preço normal de etiqueta mais juros de 10%\n");
        printf("---------------------------------\n");
        printf("Digite sua escolha: ");
        scanf("%d", &opcao);


        switch(opcao) {
            case 1:
                printf("Você escolheu a opção 1\n");
                printf("Adicionado em sua conta R$ 12,00\n");
                totalConta += 12;
                nOpcao1++;
                break;
            case 2:
                printf("Você escolheu a opção 2\n");
                printf("Adicionado em sua conta R$ 15,00\n");
                totalConta += 15;
                nOpcao2++;
                break;
            case 3:
                printf("Você escolheu a opção 3\n");
                printf("Adicionado em sua conta R$ 5,50\n");
                totalConta += 5.5;
                nOpcao3++;
                break;
            case 4:
                printf("Detalhes da conta:\n");
                printf("%d x Opção 1 (valor unitário R$ 12,00) = R$ %.2f\n", nOpcao1, nOpcao1*12.0);
                printf("%d x Opção 2 (valor unitário R$ 15,00) = R$ %.2f\n", nOpcao2, nOpcao2*15.0);
                printf("%d x Opção 3 (valor unitário R$  5,50) = R$ %.2f\n", nOpcao3, nOpcao3*5.5);
                printf("Sua conta deu um total de: R$ %.2f\n", totalConta);
                break;
            default:
                printf("OPÇÃO INVÁLIDA!\n");
        }
    } while(opcao != 4);


    return 0;
}
