#include <stdio.h>
/*
    Desenvolva um algoritmo em C que leia a entrada de três números reais, calcule a soma,
    média e a multiplicação destes números. Os valores devem ser impressos ao final.
    Considere duas casas decimais.
*/
int main(){
	float num1, num2, num3, soma, media, multiplicacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);

    soma = num1 + num2 + num3;
    media = soma / 3;
    multiplicacao = num1 * num2 * num3;

    printf("\nO resultado da soma: %.2f", soma);
    printf("\nO resultado da media: %.2f", media);
    printf("\nO resultado da multiplicacao: %.2f", multiplicacao);

    return 0;
}