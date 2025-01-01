#include <stdio.h>

int main()
{
    int numero = 1000;
    int mod;
    do
    {
        mod = numero % 11;
        if (mod == 5)
        {
            printf("O numero %d dividido por 11 vai sobrar 5\n", numero);
        }

        numero++;
    } while (numero <= 1999);

    return 0;
}