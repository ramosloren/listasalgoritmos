#include <stdio.h>
#include <stdlib.h>

    //7. Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso
    //ideal, utilizando as seguintes fórmulas:
    //● para homens: (72.7 * h) – 58;
    //● para mulheres: (62.1 * h) – 44.7.

int main()
{
    float altura, peso_ideal;
    char sexo;

    printf("\nDigite o sexo: h para homem ou m para mulher: ");
    scanf("%c", &sexo);
    printf("\nDigite a altura em metros: ");
    scanf("%f", &altura);

    if (sexo == 'h'){
        peso_ideal = (72.7*altura)-58;
        printf("\nSeu peso ideal e %.2f", peso_ideal);
    }else if (sexo == 'm'){
        peso_ideal = (62.1*altura)-44.7;
        printf("\nSeu peso ideal e %.2f", peso_ideal);
    }
    return 0;
}
