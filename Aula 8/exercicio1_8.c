#include <stdio.h>

int main()
{
    int sinal, resultado, numero1, numero2;

    printf("Entre com o sinal que deseja: \n[1: +]\n[2: -]\n[3: *]\n[4: /]\n");
    scanf("%d", &sinal);

    if (sinal <= 0 || sinal > 4)
    {
        printf("Numero invalido");
        return 0;
    }

    printf("\nEntre com o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Entre com o segundo numero: ");
    scanf("%d", &numero2);

    if (sinal == 1)
    {
        resultado = numero1 + numero2;
        printf("RESULTADO: %d", resultado);
    }
    else if (sinal == 2)
    {
        resultado = numero1 - numero2;
        printf("RESULTADO: %d", resultado);
    }
    else if (sinal == 3)
    {
        resultado = numero1 * numero2;
        printf("RESULTADO: %d", resultado);
    }
    else
    {
        resultado = numero1 / numero2;
        printf("RESULTADO: %d", resultado);
    }

    return 0;
}