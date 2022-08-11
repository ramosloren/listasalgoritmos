#include <stdio.h>
#include <stdlib.h>

int main()
{
    //38.Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual e mostre:
    //a idade dessa pessoa em anos;
    //em meses;
    //dias;
    //semanas;

    int ano_nasceu, ano_atual, idade_anos, idade_meses, idade_dias, idade_semanas;

    printf("\nDigite o ano que voce nasceu com quatro digitos: ");
    scanf("%d", &ano_nasceu);
    printf("\nDigite o ano atual com quatro digitos: ");
    scanf("%d", &ano_atual);

    idade_anos = ano_atual - ano_nasceu;
    idade_meses = idade_anos * 12;
    idade_dias = idade_meses * 30;
    idade_semanas = idade_meses * 4;

    printf("\nSua idade e: %d anos de vida", idade_anos);
    printf("\nSua idade e: %d meses de vida", idade_meses);
    printf("\nSua idade e: %d dias de vida", idade_dias);
    printf("\nSua idade e: %d semanas de vida", idade_semanas);

    return 0;
}
