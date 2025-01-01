#include <stdio.h>
#include <math.h>

int main(){
    float cateto1, quadradoCateto1, cateto2, quadradoCateto2, hipotenusa;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &cateto1);

    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &cateto2);

    quadradoCateto1 = pow(cateto1, 2);
    quadradoCateto2 = pow(cateto2, 2);

    hipotenusa = sqrt(quadradoCateto1 + quadradoCateto2);

    printf("HIPOTENUSA: %.2f", hipotenusa);

    return 0;
}