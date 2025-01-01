#include <stdio.h>

int main()
{
    int numero;

    printf("Entre com o numero: ");
    scanf("%d", &numero);

    if (numero % 5 == 0)
    {
        printf("%d e multiplo de 5", numero);
    }
    else
    {
        printf("%d nao e multiplo de 5", numero);
    }

    return 0;
}