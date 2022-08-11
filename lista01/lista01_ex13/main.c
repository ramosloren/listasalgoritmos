#include <stdio.h>
#include <stdlib.h>

    //13. Ler um número inteiro (assuma até três dígitos) e imprimir a saída da seguinte forma: CENTENA = x
    //DEZENA = x
    //UNIDADE = x

int main()
{
    int centena, dezena, unidade, numero;

    printf("\nDigite um numero inteiro de no maximo e digitos: ");
    scanf("%d", &numero);

    //define o valor que irá ficar nessa opção (/100);
    //na dezena (/10) e diminui
    centena = numero/100;
    dezena = numero/10 - (centena*10);
    unidade = numero - (centena*100) - (dezena*10);

    printf("\nCENTENA = %d \n\DEZENA = %d \nUNIDADE = %d", centena, dezena, unidade);


    return 0;
}
