#include <stdio.h>
#include <stdlib.h>

    //17. Alguns pa�ses medem temperaturas em graus Celsius, e outros em graus Fahrenheit. Fa�a um algoritmo
    //para ler uma temperatura Celsius e imprimi-Ia em Fahrenheit (pesquise como fazer este tipo de convers�o).

int main()
{
    float temperaturaC, temperaturaF;

    printf("\nInforme a temperatura em graus Celsius: ");
    scanf("%f", &temperaturaC);

    temperaturaF = (temperaturaC * 9/5) + 32;

    printf("A temperatura e %.2f graus Fahrenheit", temperaturaF);
    return 0;
}
