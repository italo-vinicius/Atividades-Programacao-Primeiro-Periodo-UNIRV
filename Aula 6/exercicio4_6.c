#include <stdio.h>
#include <math.h>

int main(){
    float inputUsuario, grandezaRaiz, resultado;

    printf("Digite o numero para calcular a raiz: ");
    scanf("%f", &inputUsuario);

    printf("Digite a grandeza da raiz: ");
    scanf("%f", &grandezaRaiz);

    resultado = pow(inputUsuario, 1.0/grandezaRaiz);

    printf("RESULTADO: %.2f", resultado);

    return 0;
}