#include <stdio.h>
#include <stdlib.h>

    //13. Ler um n�mero inteiro (assuma at� tr�s d�gitos) e imprimir a sa�da da seguinte forma: CENTENA = x
    //DEZENA = x
    //UNIDADE = x

int main()
{
    int centena, dezena, unidade, numero;

    printf("\nDigite um numero inteiro de no maximo e digitos: ");
    scanf("%d", &numero);

    //define o valor que ir� ficar nessa op��o (/100);
    //na dezena (/10) e diminui
    centena = numero/100;
    dezena = numero/10 - (centena*10);
    unidade = numero - (centena*100) - (dezena*10);

    printf("\nCENTENA = %d \n\DEZENA = %d \nUNIDADE = %d", centena, dezena, unidade);


    return 0;
}
