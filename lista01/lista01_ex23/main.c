#include <stdio.h>
#include <stdlib.h>

    //23. Num dia de sol, voc� deseja medir a altura de um pr�dio, por�m, a trena n�o � suficientemente longa.
    //Assumindo que seja poss�vel medir sua sombra e a do pr�dio no ch�o, e que voc� lembre da sua altura, fa�a um
    //algoritmo para ler os dados necess�rios e calcular a altura do pr�dio.

int main()
{
    float S, s, H, h;

    printf("\nInsira a medida da sombra do predio em metros: ");
    scanf("%f", &S);
    printf("\nInsira a medida sua sombra em metros: ");
    scanf("%f", &s);
    printf("\nInsira a sua altura em metros: ");
    scanf("%f", &h);

    //Teorema de Tales
    H = (S/s) * h;

    printf("\nA altura do predio e %.2f metros.", H);

    return 0;
}
