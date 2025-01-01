#include <stdio.h>

int main()
{
    char plano;
    float salario;

    printf("Digite o plano de trabalho e o salario atual do funcionario:\n");
    scanf("%c %f", &plano, &salario);

    switch (plano)
    {
    case 'A':
        printf("O novo salario sera de %.2f reais", salario + (salario * 0.10));
        break;
    case 'B':
        printf("O novo salario sera de %.2f reais", salario + (salario * 0.15));
        break;
    case 'C':
        printf("O novo salario sera de %.2f reais", salario + (salario * 0.20));
        break;

    default:
        printf("ERRO!");
    }

    return 0;
}