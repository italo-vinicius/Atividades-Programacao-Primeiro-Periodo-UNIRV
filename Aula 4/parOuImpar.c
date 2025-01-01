#include <stdio.h>

int main()
{
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("MAIOR DE IDADE");
    }
    else
    {
        printf("MENOR DE IDADE");
    }

    return 0;
}