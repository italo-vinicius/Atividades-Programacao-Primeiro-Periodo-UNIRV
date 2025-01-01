#include <stdio.h>

int main()
{
    int numero;
    printf("Digite um numero aleatorio de 1 a 10: \n");
    scanf("%d", &numero);

    switch (numero)
    {
    case 0:
        printf("O numero digitado foi zero");
        break;
    case 1:
        printf("O numero digitado foi um");
        break;
    case 2:
        printf("O numero digitado foi dois");
        break;
    case 3:
        printf("O numero digitado foi tres");
        break;
    case 4:
        printf("O numero digitado foi quatro");
        break;
    case 5:
        printf("O numero digitado foi cinco");
        break;
    case 6:
        printf("O numero digitado foi seis");
        break;
    case 7:
        printf("O numero digitado foi sete");
        break;
    case 8:
        printf("O numero digitado foi oito");
        break;
    case 9:
        printf("O numero digitado foi nove");
        break;
    case 10:
        printf("O numero digitado foi dez");
        break;

    default:
        printf("ERRO!");
    }

    return 0;
}