#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //40. Faça um algoritmo que receba o valor dos catetos de um triângulo,
    //calcule a hipotenusa

    double cateto1, cateto2, hipotenusa;

    //não esqueça de utilizar o & para salvar (scanf) o valor das variáveis digitadas em printf
    printf("\nDigite o valor do cateto 1 em centimetros: ");
    scanf("%lf", &cateto1);
    printf("\nDigite o valor do cateto 2 em centimetros: ");
    scanf("%lf", &cateto2);

    //teorema de pitágoras, para tirar a hip², coloca o valor em raiz (sqrt)
    //pow para elevar ao ²
    hipotenusa = sqrt(pow(cateto1,2) + pow (cateto2,2) );

    printf("\nO valor da hipotenusa e: %.2lf cm.", hipotenusa);

    return 0;
}
