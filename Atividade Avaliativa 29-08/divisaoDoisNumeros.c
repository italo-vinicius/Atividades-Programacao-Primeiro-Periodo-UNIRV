#include <stdio.h>

/*
    Desenvolva um algoritmo em C, cujo usuário entre com o valor do numerador e do denominador de uma fração.
    O código deve calcular a divisão entre os dois números se o valor do denominador for diferente de zero e 
    imprimir o resultado, caso contrário imprimir a mensagem que a divisão não é possível. Obs.: Detalhe, explicarei 
    o possível “erro” do cálculo da divisão entre números inteiros atribuído a uma variável real, mas antes tente implementar o código.
*/

int main(){
    float numerador, denominador, resultado;

    printf("Digite o numerador: ");
    scanf("%f", &numerador);

    printf("Digite o denominador: ");
    scanf("%f", &denominador);

    if(denominador == 0){
        printf("\nERRO: A divisao nao e possivel pois o denominador e zero.");
    }
    else
    {
        resultado = numerador / denominador;
        printf("\nO resultado da divisao foi de %.2f", resultado);
    }

    return 0;
}