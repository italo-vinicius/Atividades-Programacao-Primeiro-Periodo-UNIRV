#include <stdio.h>
#include <math.h>

int main(){
    float valorGraus, valorFahrenheit;

    printf("Entre com o valor em Graus: ");
    scanf("%f", &valorGraus);

    valorFahrenheit = valorGraus * 1.8 + 32;

    printf("VALOR EM FAHRENHEIT: %2.f", valorFahrenheit);

    return 0;
}