#include <stdio.h>
#include <stdlib.h>
#include <math.h>


    //10. Construa um algoritmo para calcular a distância entre dois pontos do plano cartesiano.
    //Cada ponto é um par ordenado (x,y).

int main()
{
    double x1;
    double y1;
    double x2;
    double y2;
    double distancia;

    //lembrar de utilizar & para salvar o valor da variável no scanf;
    printf("\nDigite a coordenada x do ponto a: ");
    scanf("%lf", &x1);

    printf("\nDigite a coordenada y do ponto a: ");
    scanf("%lf", &y1);

    printf("\nDigite a coordenada x do ponto b: ");
    scanf("%lf", &x2);

    printf("\nDigite a coordenada y do ponto b: ");
    scanf("%lf", &y2);

    //para calcular raiz quadrada precisa acrescentar #include <math.h> no inicio da página,
    //e a expressão "sqrt" seguida do que está na raiz em parenteses
    //para potencia (elevar ao quadrado, por exemplo, usa a expressão "pow"
    //na equação segue assim: pow(x2-x1,2); (vírgula 2 indica a potencia)

    //equacao convencional de pitagoras
    distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    printf("\nA distancia entre os dois pontos cartesianos e: %.2lf unidade de medida", distancia);

    return 0;
}
