#include <stdio.h>
#include <stdlib.h>

    //20. Uma confec��o produz X blusas de l� e para isto gasta uma certa quantidade de novelos. Fa�a um algoritmo
    //para calcular quantos novelos de l� ela gasta por blusa.
    //(est� faltando informa��es...)

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
