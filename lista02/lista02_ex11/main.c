#include <stdio.h>
#include <stdlib.h>

    //11. Uma escola faz o pagamento de seus professores por hora/aula. Faça um algoritmo que solicite ao usuário, o
    //nível do professor e a quantidade de horas/aula ele tem na semana. Em seguida, calcule e exiba o salário de
    //um professor sabendo que a fórmula para o cálculo do salário é 𝑠𝑠𝑠𝑠𝑠𝑠 = 𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣 ∗ 𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞 ∗ 4.5. O valor
    //da hora/aula do professor é dado em função do seu nível:
    //Professor Nível 1 R$12,00 por hora/aula
    //Professor Nível 2 R$17,00 por hora/aula
    //Professor Nível 3 R$25,00 por hora/aula

int main()
{
    int valorHoraAula, qtdAula;
    double salario;

    printf("\nDigite o nivel do professor (1, 2 ou 3): ");
    scanf("%d", &valorHoraAula);
    printf("\nDigite a quantidade de horas/aulas por semana do professor: ");
    scanf("%d", &qtdAula);

    if (valorHoraAula == 1){
        salario = (12 * qtdAula * 4.5);
        printf("O salario semanal do professor e %.2lf", salario);
    }else{
        if (valorHoraAula == 2){
            salario = (17 * qtdAula * 4.5);
            printf("O salario semanal do professor e %.2lf", salario);
        }else{
            if (valorHoraAula == 3){
            salario = (25 * qtdAula * 4.5);
            printf("O salario semanal do professor e %.2lf", salario);
            }
        }
    }


    return 0;
}
