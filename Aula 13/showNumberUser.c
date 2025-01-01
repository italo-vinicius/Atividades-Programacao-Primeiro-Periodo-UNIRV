#include <stdio.h>

int main()
{
    int numero;
    int contadora = 0;

    printf("Digite um numero que sera repetido de 0 ate ele: \n");
    scanf("%d", &numero);

    while (contadora <= numero)
    {
        printf("Numero: %d\n", contadora);
        contadora++;
    }

    return 0;
}