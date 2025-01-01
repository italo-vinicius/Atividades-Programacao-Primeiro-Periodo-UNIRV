#include <stdio.h>

int main()
{
    char nome[10];

    printf("Entre com seu nome: ");
    scanf("%s", nome);

    if(nome[0] == 'A' || nome[0] == 'a')
    {
        printf("%s tem a primeira letra sendo A/a", nome);
    }

    return 0;
}