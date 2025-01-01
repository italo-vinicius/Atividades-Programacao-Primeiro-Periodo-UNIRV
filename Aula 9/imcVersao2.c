#include <stdio.h>

int main()
{
    float peso, altura, imc;

    printf("Digite seu peso(quilos): ");
    scanf("%f", &peso);

    printf("Digite sua altura(metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O resultado do seu IMC foi de %.2f Kg/m2\n\n", imc);

    if (imc < 18.5)
    {
        printf("Voce se encontra no nivel baixo peso.");
    }
    else if (imc >= 18.5 && imc < 25)
    {
        printf("Voce se encontra no nivel eutrofia(Peso adequado).");
    }
    else if (imc >= 25 && imc < 30)
    {
        printf("Voce se encontra no nivel sobrepeso.");
    }
    else if (imc >= 30 && imc < 35)
    {
        printf("Voce se encontra no nivel obesidade grau I.");
    }
    else if (imc >= 35 && imc < 40)
    {
        printf("Voce se encontra no nivel obesidade grau II.");
    }
    else
    {
        printf("Voce se encontra no nivel obesidade extrema");
    }

    return 0;
}