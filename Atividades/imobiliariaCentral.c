#include <stdio.h>

int main(){
    float altura, largura, area;
    
    printf("Entre com a altura do terreno: ");
    scanf("%f", &altura);

    printf("Entre com a largura do terreno: ");
    scanf("%f", &largura);

    area = altura * largura;

    printf("Area do terreno: %2.f Metros", area);

    return 0;
}