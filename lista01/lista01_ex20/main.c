#include <stdio.h>
#include <stdlib.h>

    //20. Uma confecção produz X blusas de lã e para isto gasta uma certa quantidade de novelos. Faça um algoritmo
    //para calcular quantos novelos de lã ela gasta por blusa.
    //(está faltando informações...)

int main()
{
    float blusas, novelos;

    printf("\nInforme quantas blusas de la foram feitas: ");
    scanf("%f", &blusas);
    printf("\nInforme quantos novelos de la foram usados: ");
    scanf("%f", &novelos);
    printf("Foram utilizados %.2f novelos por blusa.", novelos/blusas);

    return 0;
}
