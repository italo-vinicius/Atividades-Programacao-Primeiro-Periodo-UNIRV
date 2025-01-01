#include <stdio.h>

int main()
{
    int n, i, soma = 0;

    printf("Digite o valor ate qual vai ser calculada a soma(N): ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        soma += i;
    }

    printf("A soma dos %d primeiros numeros naturais foi de: %d\n", n, soma);

    return 0;
}