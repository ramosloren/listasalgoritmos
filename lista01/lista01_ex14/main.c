#include <stdio.h>
#include <stdlib.h>

    //14. Calcule a área de uma pizza que possui um raio R (pi=3.14);

int main()
{
    double raio, area;

    printf("\nDigite o raio da pizza em centimetros: ");
    scanf("%lf", &raio);

    area = 3.14 * pow(raio,2);

    printf("\nA area da pizza e: %.2lf centrimetros quadrado", area);

    return 0;
}
