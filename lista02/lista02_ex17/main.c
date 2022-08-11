#include <stdio.h>
#include <stdlib.h>

    //17. Para uma lanchonete, escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor
    //a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item. O cardápio
    //é o seguinte:
    //Produto Preço
    //Cachorro quente R$11,00
    //Bauru R$ 8,50
    //Misto Quente R$ 8,00
    //Hamburger R$ 9,00
    //Cheeseburger R$10,00
    //Refrigerante R$ 4,50

int main()
{
    int opcao, quant;
    float valor;

    printf("\nCARDAPIO\n");
    printf("\n1: Cachorro Quente - R$ 11,00\n");
    printf("\n2: Bauru - R$ 8,50\n");
    printf("\n3: Misto Quente - R$ 8,00\n");
    printf("\n4: Hamburger - R$ 9,00\n");
    printf("\n5: Cheeseburger - R$ 10,00\n");
    printf("\n6: Refrigerante - R$ 4,50\n");

    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            valor = 11.00;
            break;
        case 2:
            valor = 8.50;
            break;
        case 3:
            valor = 8.00;
            break;
        case 4:
            valor = 9.00;
            break;
        case 5:
            valor = 10.00;
            break;
        case 6:
            valor = 4.50;
            break;
        default:
            valor = 0;
    }
    if(valor != 0) { // se a opcao for valida, pois valor sera diferente de zero
        printf("\nDigite a quantidade: ");
        scanf("%d", &quant);

        printf("\nTotal R$ %.2f\n", valor*quant);
    } else {
        printf("\nCodigo invalido\n");
    }
}
