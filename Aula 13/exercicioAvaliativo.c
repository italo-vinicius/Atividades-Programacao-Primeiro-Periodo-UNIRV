#include <stdio.h>

int main()
{
    float numero = 1;
    float soma = 0;
    int quantidadeNumeros = 0;

    while (numero != 0)
    {
        printf("Digite um numero (REAL E MAIOR QUE ZERO): \n");
        scanf("%f", &numero);

        if (numero > 0)
        {
            quantidadeNumeros++;
            soma = soma + numero;
        }
    }

    if (quantidadeNumeros > 0)
    {
        printf("Entraram %d numeros reais e maiores que Zero, e a media total foi de %.2f", quantidadeNumeros, soma / quantidadeNumeros);
    }
    else
    {
        printf("Sem numeros reais e maiores que Zero inseridos");
    }

    return 0;
}