#include <stdio.h>

int main()
{
    char nome[10];
    int i;

    printf("DIgite seu nome: ");
    scanf("%s", nome);

    printf("As 4 primeiras letras sao: ");

    for(i = 0; i < 4; i++)
    {
        printf("\n%c", nome[i]);
    }

    return 0;
}