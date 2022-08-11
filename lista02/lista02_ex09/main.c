#include <stdio.h>
#include <stdlib.h>

    //9. Escreva um algoritmo que leia o número de identificação do aluno,
    //3 notas obtidas e calcule a média aritmética obtida pelo aluno.
    //Ao final informe se o aluno foi aprovado direto, ficou em recuperação ou foi reprovado
    //por nota.

int main()
{
    int aluno;
    float nota1, nota2, nota3, media_arit;

    printf("\nDigite o numero de identificacao do aluno: ");
    scanf("%d", &aluno);
    printf("\nDigite a nota 1: ");
    scanf("%f", &nota1);
    printf("\nDigite a nota 2: ");
    scanf("%f", &nota2);
    printf("\nDigite a nota 3: ");
    scanf("%f", &nota3);

    media_arit = (nota1 + nota2 + nota3)/3;

    if (media_arit >= 7){
        printf("O aluno %d foi aprovado.", aluno);
    }else{
        if (media_arit < 7 && media_arit > 5){
            printf("O aluno %d ficou em recuperacao.", aluno);
        }else{
            if (media_arit < 5);
            printf("O aluno %d reprovou.", aluno);
        }
    }

    return 0;
}
