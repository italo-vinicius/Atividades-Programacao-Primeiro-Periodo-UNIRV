#include <stdio.h>

int main()
{
    int numero, contadora = 0;
    do
    {
        printf("Digite um numero. [SE FOR ZERO O SISTEMA PARA]: \n");
        scanf("%d", &numero);
        contadora = contadora + numero;

    } while (numero != 0);

    printf("A soma total foi de %d", contadora);

    return 0;
}