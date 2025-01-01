#include <stdio.h>

int main(){
    float nota1, nota2, media;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    if(media >=6.0f)
    {
        printf("Voce foi aprovado, sua media foi de %.2f.", media);
    }
    else
    {
        printf("Voce foi reprovado, sua media foi de %.2f.", media);
    }

    return 0;
}