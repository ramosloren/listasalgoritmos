#include <stdio.h>
#include <stdlib.h>

    //12. Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um triângulo e, se
    //forem verificar se é um triângulo equilátero, isósceles ou escalenos. Se eles não formarem um triângulo, escrever a mensagem.
    //Considere as seguintes propriedades:
    //a. O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
    //b. Equiláteros: tem os comprimentos dos três lados iguais;
    //c. Isósceles: tem os comprimentos de dois lados iguais;
    //d. Escaleno: tem os comprimentos dos três lados diferentes.


int main()
{
    int X, Y, Z;
    printf("\nInforme o valor de X: ");
    scanf("%d", &X);
    printf("\nInforme o valor de Y: ");
    scanf("%d", &Y);
    printf("\nInforme o valor de Z: ");
    scanf("%d", &Z);

    if(X + Y > Z && Y + Z > X && Z + X > Y){
        if(X == Y && X == Z)
            printf("\nTriangulo equilatero.");
        else
            if(X == Y || Y == Z || Z == X)
            printf("\nTriangulo isosceles.");
        else
            printf("\nTriangulo escaleno.");
        }
        else
            printf("\nNao e um triangulo.");
        }

    //a condição para não formar um triangulo: (X + Y < Z || Y + Z < X || Z + X < Y) já é dita quando as outras condições são estabelecidas
