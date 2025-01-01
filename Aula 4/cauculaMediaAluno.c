#include <stdio.h>

int main()
{
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 6.0f)
    {
        printf("APROVADO COM MEDIA %.2f", media);
    }
    else
    {
        printf("REPROVADO COM MEDIA %.2f", media);
    }

    return 0;
}