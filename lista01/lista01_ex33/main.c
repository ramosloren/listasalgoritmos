#include <stdio.h>
#include <stdlib.h>

int main()
{
    //33. Faça um algoritmo que calcule e mostre a área de um trapézio.
    //Sabe-se que: A = (base maior + base menor)* altura)/2;

    double area, base_maior, base_menor, altura;

    printf("\nDigite o valor da base maior em centimetros: ");
    scanf("%lf", &base_maior);
    printf("\nDigite o valor da base menor em centimetros: ");
    scanf("%lf", &base_menor);
    printf("\nDigite o valor da altura em centimetros: ");
    scanf("%lf", &altura);

    area = ((base_maior+base_menor)*altura)/2;

    printf("\nA area do losango e: %.2lf centimetros quadrados", area);
    return 0;
}
