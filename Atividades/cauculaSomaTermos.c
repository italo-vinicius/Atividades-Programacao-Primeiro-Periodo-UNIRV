#include <stdio.h>

/* 
    Crie um algoritmo que calcule a progressão aritmética (PA) para definir an
    e sn. O usuário deve informar o primeiro valor, quantidade de termos e a razão. 

    an = a1 + (n - 1) * r
    sn = (n * (a1 + an) ) / 2

    Onde, n → é a posição do termo; a1 → é o primeiro termo; r → razão; e sn é a soma 
    de  termos da PA.
*/

int main(){
    int an, sn, primeiroValor, quantTermos, razao;

    printf("Informe o primeiro valor: ");
    scanf("%d", &primeiroValor);

    printf("Informe a quantidade de termos desejados: ");
    scanf("%d", &quantTermos);

    printf("Informe a razao: ");
    scanf("%d", &razao);

    an = primeiroValor + (quantTermos - 1) * razao;
    sn = (quantTermos * (primeiroValor + an)) / 2;

    printf("O resultado para An: %d\nO resultado para Sn: %d", an, sn);

    return 0;
}