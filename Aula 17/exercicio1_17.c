#include <stdio.h>

int main()
{
    char primeiroNome[10];
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", primeiroNome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("\nO seu nome e %s e sua idade e %d", primeiroNome, idade);

    return 0;
}