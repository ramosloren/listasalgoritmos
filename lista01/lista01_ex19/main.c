#include <stdio.h>
#include <stdlib.h>

    //19. A granja Frangotech possui um controle automatizado de cada frango da sua produ��o. No p� direito do
    //frango h� um anel com um chip de identifica��o; no p� esquerdo s�o dois an�is para indicar o tipo de alimento
    //que ele deve consumir. Sabendo que o anel com chip custa R$4,00 e o anel de alimento custa
    //R$3,50, fa�a um algoritmo para calcular o gasto total da granja para marcar todos os seus frangos

int main()
{
    float frangos, chip, alimento;

    printf("\nInforme a quantidade de frangos: ");
    scanf("%f", &frangos);

    chip = frangos * 4;
    alimento = 2 * (frangos * 3.5);

    printf("\nO gasto total com aneis para identificar os frangos e R$ %.2f", chip+alimento);

    return 0;
}
