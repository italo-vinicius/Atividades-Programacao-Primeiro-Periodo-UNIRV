#include <stdio.h>
#include <math.h>

int main(){
    double raizQuadrada;

    raizQuadrada = sqrt(9);
    printf("RAIZ QUADRADA DE 9: %.2f", raizQuadrada);
    
    raizQuadrada = sqrt(-9);
    printf("\nRESULTADO CASO SEJA USADO NUMERO NEGATIVO NO ARGUMENTO: %f", raizQuadrada);

    return 0;
}