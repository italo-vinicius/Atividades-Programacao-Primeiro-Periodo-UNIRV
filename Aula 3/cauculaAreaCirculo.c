#include <stdio.h>
#include <math.h>

// #define PI 3.14

int main(){

    float area, raio;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    area = M_PI * pow(raio, 2);

    printf("A area do circulo: %.2f\n", area);
    return 0;
}
