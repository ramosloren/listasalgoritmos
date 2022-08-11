#include <stdio.h>
#include <stdlib.h>

    //8. Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua média ponderada (as
    //notas tem pesos respectivos de 1, 2 e 3).

int main()
{
    float nota1,nota2,nota3,media;

    printf("\nDigite a nota 1: ");
    scanf("%f", &nota1);
    printf("\nDigite a nota 2: ");
    scanf("%f", &nota2);
    printf("\nDigite a nota 3: ");
    scanf("%f", &nota3);

    media=((nota1*1)+(nota2*2)+(nota3*3))/(1+2+3);

    printf("\nA media ponderada e : %0.f", media);

    return 0;
}
