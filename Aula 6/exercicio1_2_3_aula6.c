#include <stdio.h>
#include <math.h>

int main(){
    float inputUsuario, raizQuadrada, raizCubica, raizQuarta;

    printf("Entre com o numero inteiro: ");
    scanf("%f", &inputUsuario);

    raizQuadrada = sqrt(inputUsuario);
    raizCubica = pow(inputUsuario, 1.0/3);
    raizQuarta = pow(inputUsuario, 1.0/4);

    printf("Raiz quadrada: %.2f", raizQuadrada);
    printf("\nRaiz cubica: %.2f", raizCubica);
    printf("\nRaiz quarta: %.2f", raizQuarta);

    return 0;
}