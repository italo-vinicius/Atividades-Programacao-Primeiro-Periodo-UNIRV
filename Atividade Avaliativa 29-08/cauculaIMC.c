#include <stdio.h>

/*
    Desenvolva um algoritmo que calcule o índice de massa corpórea (𝐼𝑀𝐶) de uma pessoa.
    O usuário deve entrar com a altura e o peso. Utilize a seguinte fórmula: imc = peso / altura²
*/

int main() {
    float peso, altura, imc;

    printf("Digite seu peso(quilos): ");
    scanf("%f", &peso);

    printf("Digite sua altura(metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O resultado do seu IMC foi de %.2f", imc);

    return 0;
}