#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    //25. Calcule o volume de uma caixa d'�gua cil�ndrica.

int main()
{

    double raio, altura, volume;

    printf("\nInsira o valor do raio em metros: ");
    scanf("%lf", &raio);
    printf("\nInsira o valor da altura em metros: ");
    scanf("%lf", &altura);

    //formula do volume do cilindro V= pi*r�h

    volume = 3.14 * pow(raio,2) * altura;

    printf("\nO volume da caixa de agua cilindrica e: %.2lf litros", volume);

    return 0;
}
