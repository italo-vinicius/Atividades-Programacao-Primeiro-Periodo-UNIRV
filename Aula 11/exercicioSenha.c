#include <stdio.h>

int main()
{
    int primeiroDigitoCorreto = 6;
    int segundoDigitoCorreto = 0;
    int primeiroDigitoUsuario, segundoDigitoUsuario;

    printf("Digite o primeiro digito da senha: ");
    scanf("%d", &primeiroDigitoUsuario);

    printf("\nDigite o segundo digito da senha: ");
    scanf("%d", &segundoDigitoUsuario);

    if (primeiroDigitoUsuario == primeiroDigitoCorreto)
    {
        if (segundoDigitoUsuario == segundoDigitoCorreto)
        {
            printf("\nACESSO PERMITIDO");
        }
        else
        {
            printf("\nACESSO NEGADO");
        }
    }
    else
    {
        printf("\nACESSO NEGADO");
    }
    return 0;
}