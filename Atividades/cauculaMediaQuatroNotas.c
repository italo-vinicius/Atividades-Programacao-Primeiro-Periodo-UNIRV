#include <stdio.h>

/*
    Crie um algoritmo que leia o primeiro nome e as quatro notas de um aluno, 
    calcule a sua média e mostre na tela. No final, analise a média e mostre se o 
    aluno teve ou não um bom aproveitamento (se ficou acima da média 6.0).
        - Média é menor que 5.0: REPROVADO
        - Média entre 5.0 e menor que 6.0: RECUPERAÇÃO
        - Média 6.0 ou superior: APROVADO 
*/

int main(){
    char nomeAluno[25];
    float nota1, nota2, nota3, nota4, media;

    printf("Digite o seu primeiro nome: ");
    scanf("%s", nomeAluno);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4)/4;

    if(media < 5.0f){
        printf("%s infelizmente foi reprovado. A media foi de %.2f", nomeAluno, media);
    }else if(media >= 5 && media < 6){
        printf("%s foi para a recuperacao. A media foi de %.2f", nomeAluno, media);
    }else{
        printf("%s foi aprovado. A media foi de %.2f", nomeAluno, media);
    }

    return 0;
}