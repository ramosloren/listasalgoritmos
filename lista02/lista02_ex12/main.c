#include <stdio.h>
#include <stdlib.h>

    //12. Dados tr�s valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um tri�ngulo e, se
    //forem verificar se � um tri�ngulo equil�tero, is�sceles ou escalenos. Se eles n�o formarem um tri�ngulo, escrever a mensagem.
    //Considere as seguintes propriedades:
    //a. O comprimento de cada lado em um tri�ngulo � menor que a soma dos outros dois lados;
    //b. Equil�teros: tem os comprimentos dos tr�s lados iguais;
    //c. Is�sceles: tem os comprimentos de dois lados iguais;
    //d. Escaleno: tem os comprimentos dos tr�s lados diferentes.


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

    //a condi��o para n�o formar um triangulo: (X + Y < Z || Y + Z < X || Z + X < Y) j� � dita quando as outras condi��es s�o estabelecidas
