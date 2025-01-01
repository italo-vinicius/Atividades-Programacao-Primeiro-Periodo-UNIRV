#include <stdio.h>

int main()
{
    float quantidadeMacas, valorMaca;

    printf("Quantas macas voce deseja? ");
    scanf("%f", &quantidadeMacas);

    if (quantidadeMacas < 12)
    {
        valorMaca = 0.30;
    }
    else if (quantidadeMacas == 12)
    {
        valorMaca = 0.28;
    }
    else
    {
        valorMaca = 0.26;
    }

    if (valorMaca > 1)
    {
        printf("O valor da maca sera de %.2f reais", valorMaca);
    }
    else
    {
        printf("O valor da maca sera de %.2f centavos", valorMaca);
    }

    return 0;
}