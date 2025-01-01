#include <stdio.h>

/*
    Crie um algoritmo que calcule o ajuste salarial de um funcionário. O usuário
    deve entrar com o nome do funcionário, valor do salário e com
    fator de ajuste(exemplo: +10% = 1.1, +15% = 1.15, ...).
*/

int main(){
    char nomeFuncionario[50];
    float salario, fatorAjuste, salarioReajustado;

    printf("Informe o nome do funcionário: ");
    scanf(" %49[^\n]", nomeFuncionario);
    // fgets(nomeFuncionario, sizeof(nomeFuncionario), stdin);
    // Remove o caractere de nova linha lido pelo fgets
    // nomeFuncionario[strcspn(nomeFuncionario, "\n")] = 0;

    printf("Informe o salario atual: ");
    scanf("%f", &salario);

    printf("Informe o fator de ajuste(Exemplo: +10%% = 1.1, +15%% = 1.15, ...): ");
    scanf("%f", &fatorAjuste);

    salarioReajustado = salario * fatorAjuste;

    printf("O novo salario de %s sera de R$%.3f.", nomeFuncionario, salarioReajustado);

    return 0;
}