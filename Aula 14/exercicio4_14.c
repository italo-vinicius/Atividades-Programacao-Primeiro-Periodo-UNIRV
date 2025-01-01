#include <stdio.h>

int main()
{
    int i, inputUsuario;
    int quantidadePares = 0;
    int quantidadeImpares;

    for (i = 1; i <= 10; i++)
    {
        printf("Digite um numero inteiro\n");
        scanf("%d", &inputUsuario);

        if (inputUsuario % 2 == 0)
        {
            quantidadePares++;
        }
        else
        {
            quantidadeImpares++;
        }
    }

    printf("Entraram %d numeros pares e %d numeros impares", quantidadePares, quantidadeImpares);

    return 0;
}