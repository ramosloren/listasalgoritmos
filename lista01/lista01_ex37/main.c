#include <stdio.h>
#include <stdlib.h>

int main()
{
    //37.Faça um algoritmo que calcule e mostre a tabuada de um número digitado pelo usuário

    double numero, zero, um, dois, tres, quatro, cinco, seis, sete, oito, nove, dez;
    printf("\nDigite um numero: ");
    scanf("%lf", &numero);

    zero = 0*numero;
    um = 1*numero;
    dois = 2*numero;
    tres = 3*numero;
    quatro = 4*numero;
    cinco = 5*numero;
    seis = 6*numero;
    sete = 7*numero;
    oito = 8*numero;
    nove = 9*numero;
    dez = 10*numero;

    printf("\nA tabuada do %.2lf e: \n\n0=%.2lf \n\n1=%.2lf \n\n2=%.2lf \n\n3=%.2lf \n\n4=%.2lf \n\n5=%.2lf \n\n6=%.2lf \n\n7=%.2lf \n\n8=%.2lf \n\n9=%.2lf \n\n10=%.2lf", numero, zero, um, dois, tres, quatro, cinco, seis, sete, oito, nove, dez);
    return 0;
}
