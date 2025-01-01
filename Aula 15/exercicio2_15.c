#include <stdio.h>

int main()
{
    int numero;
    do
    {
        printf("Digite um numero. [SE FOR 1 O SISTEMA PARA]: \n");
        scanf("%d", &numero);

    } while (numero != 1);

    return 0;
}