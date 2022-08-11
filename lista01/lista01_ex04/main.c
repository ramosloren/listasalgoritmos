#include <stdio.h>
#include <stdlib.h>

    //4. Escreva um algoritmo para ler o nome e a idade de uma pessoa, e exibir quantos dias de vida ela possui.
    //Considere sempre anos completos, e que um ano possui 365 dias. Ex: uma pessoa com 19 anos possui
    //6935 dias de vida; veja um exemplo de saída: MARIA, VOCÊ JÁ VIVEU 6935 DIAS

int main()
{
    char nome[20];
    int idade;
    int dias;

    printf("\nBem vindo, digite seu nome: ");
    scanf("%s", nome);
    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    printf("%s, voce ja viveu %d dias.", nome,idade*365);

    return 0;
}
