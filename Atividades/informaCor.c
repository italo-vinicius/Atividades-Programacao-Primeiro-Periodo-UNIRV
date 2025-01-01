#include <stdio.h>

/*
    Crie um algoritmo que leia um número inteiro qualquer e verifique se o
    número é menor que 100 (imprimir “verde”), se ele se encontra entre o intervalo
    de 100 e 1000 (imprimir “amarelo”) e caso ele seja maior 1000 (imprimir “vermelho”).
*/

int main(){
    int randomNum;

    printf("Digite um inteiro qualquer: ");
    scanf("%d", &randomNum);

    if(randomNum < 100){
        printf("VERDE");
    }else if(randomNum >= 100 && randomNum <= 1000){
        printf("AMARELO");
    }else{
        printf("VERMELHO");
    }

    return 0;
}