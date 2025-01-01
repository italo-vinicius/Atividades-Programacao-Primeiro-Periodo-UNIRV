#include <stdio.h>

int main()
{
    float salarioMinimo, salarioPessoa, quantidadeSalariosMinimos;

    printf("Entre com o salario minimo atual: ");
    scanf("%f", &salarioMinimo);

    printf("Entre com o salario da pessoa: ");
    scanf("%f", &salarioPessoa);

    quantidadeSalariosMinimos = salarioPessoa / salarioMinimo;

    printf("O salario da pessoa equivale a %.1f salarios minimos", quantidadeSalariosMinimos);
    return 0;
}