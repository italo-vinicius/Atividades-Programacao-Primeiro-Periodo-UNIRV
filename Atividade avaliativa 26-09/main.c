#include <stdio.h>
#include <locale.h> // Biblioteca necessária para definir a localidade

int main()
{
    // Define a localidade para exibir caracteres especiais corretamente
    setlocale(LC_ALL, "portuguese");

    // Declaração das variáveis inteiras que serão usadas no sistema, todas iniciadas com valor 0.
    int quantidadeMateriaPrimaFornecida = 0,
        quantidadeDeFardosTipo1 = 0,
        quantidadeDeFardosTipo2 = 0,
        quantidadeDeFardosTipo3 = 0,
        totalMateriaPrimaUsada = 0,
        quantidadeFardoTipo1Remocao = 0,
        quantidadeFardoTipo2Remocao = 0,
        quantidadeFardoTipo3Remocao = 0,
        restanteMateriaPrima = 0,
        diferencaMateriaPrimaUsada = 0;

    printf("**** SISTEMA COCA-PEPSI ****\n");

    // Recebe a quantidade de matéria-prima disponível no dia e armazena na variável 'quantidadeMateriaPrimaFornecida'.
    printf("\nInforme a quantidade de matéria-prima fornecida hoje: ");
    scanf("%d", &quantidadeMateriaPrimaFornecida);

    // Se a quantidade de matéria-prima for menor que 1 kg, o sistema encerra e exibe uma mensagem de erro.
    if (quantidadeMateriaPrimaFornecida < 1)
    {
        printf("Entrada inválida");
        return 0;
    }

    // Recebe a quantidade de fardos do tipo 1 planejada e armazena na variável 'quantidadeDeFardosTipo1'.
    printf("\nInforme a quantidade de fardos do tipo 1 para produzir hoje: ");
    scanf("%d", &quantidadeDeFardosTipo1);

    // Se a quantidade de fardos do tipo 1 for negativa, o sistema encerra com mensagem de erro.
    if (quantidadeDeFardosTipo1 < 0)
    {
        printf("Entrada inválida");
        return 0;
    }

    // Recebe a quantidade de fardos do tipo 2 planejada e armazena na variável 'quantidadeDeFardosTipo2'.
    printf("\nInforme a quantidade de fardos do tipo 2 para produzir hoje: ");
    scanf("%d", &quantidadeDeFardosTipo2);

    // Se a quantidade de fardos do tipo 2 for negativa, o sistema encerra com mensagem de erro.
    if (quantidadeDeFardosTipo2 < 0)
    {
        printf("Entrada inválida");
        return 0;
    }

    // Recebe a quantidade de fardos do tipo 3 planejada e armazena na variável 'quantidadeDeFardosTipo3'.
    printf("\nInforme a quantidade de fardos do tipo 3 para produzir hoje: ");
    scanf("%d", &quantidadeDeFardosTipo3);

    // Se a quantidade de fardos do tipo 3 for negativa, o sistema encerra com mensagem de erro.
    if (quantidadeDeFardosTipo3 < 0)
    {
        printf("Entrada inválida");
        return 0;
    }

    // Calcula o total de matéria-prima que será usada de acordo com o planejamento e armazena em 'totalMateriaPrimaUsada'.
    totalMateriaPrimaUsada = (quantidadeDeFardosTipo1 * 1) + (quantidadeDeFardosTipo2 * 3) + (quantidadeDeFardosTipo3 * 9);

    // Se a quantidade de matéria-prima usada for maior que a disponível, sugere a remoção de fardos.
    if (totalMateriaPrimaUsada > quantidadeMateriaPrimaFornecida)
    {
        // Calcula a diferença entre a matéria-prima necessária e a disponível.
        diferencaMateriaPrimaUsada = totalMateriaPrimaUsada - quantidadeMateriaPrimaFornecida;

        // Calcula quantos fardos de 9 kg (tipo 3) podem ser removidos para reduzir o consumo.
        quantidadeFardoTipo3Remocao = diferencaMateriaPrimaUsada / 9;

        // Calcula o restante de matéria-prima que ainda precisa ser ajustado após remover os fardos do tipo 3.
        restanteMateriaPrima = diferencaMateriaPrimaUsada % 9;

        // Se ainda restar matéria-prima a ser ajustada, remove fardos menores.
        if (restanteMateriaPrima > 0)
        {
            // Calcula quantos fardos de 3 kg (tipo 2) podem ser removidos.
            quantidadeFardoTipo2Remocao = restanteMateriaPrima / 3;
            restanteMateriaPrima = restanteMateriaPrima % 3;

            // Se ainda restar matéria-prima, calcula quantos fardos de 1 kg (tipo 1) devem ser removidos.
            if (restanteMateriaPrima > 0)
            {
                quantidadeFardoTipo1Remocao = restanteMateriaPrima / 1;
            }
        }

        // Exibe a quantidade de fardos que devem ser removidos do planejamento.
        printf("\nO planejamento de produção irá utilizar %d kg, excedendo em %d kg a quantidade disponível (%d kg).", totalMateriaPrimaUsada, diferencaMateriaPrimaUsada, quantidadeMateriaPrimaFornecida);

        printf("\nSerá necessário retirar:\n%d fardos do tipo 1\n%d fardos do tipo 2\n%d fardos do tipo 3", quantidadeFardoTipo1Remocao, quantidadeFardoTipo2Remocao, quantidadeFardoTipo3Remocao);
    }
    else
    {
        // Se a matéria-prima ser suficiente, calcula e exibe o quanto sobrou.
        restanteMateriaPrima = quantidadeMateriaPrimaFornecida - totalMateriaPrimaUsada;
        if (restanteMateriaPrima > 0)
        {
            printf("\nAinda sobraram %d kg de matéria-prima", restanteMateriaPrima);
        }
        else
        {
            printf("\nNão sobrou matéria-prima");
        }
    }

    return 0;
}


/*
    A Coca-Pepsi é uma nova empresa de bebidas que fabrica diariamente fardos de latinhas.
    No entanto, a empresa está enfrentando problemas com desperdício de matéria-prima,
    o que impacta negativamente suas receitas. Atualmente, a empresa produz três tipos de fardos:

    - Fardo tipo 1: utiliza 1 kg de matéria-prima e comporta 5 latinhas.
    - Fardo tipo 2: utiliza 3 kg de matéria-prima e comporta 10 latinhas.
    - Fardo tipo 3: utiliza 9 kg de matéria-prima e comporta 20 latinhas.

    Todo dia, a empresa recebe uma quantidade variável de matéria-prima, e precisa planejar a produção
    dos três tipos de fardos. Para evitar desperdício e automatizar o planejamento, a empresa necessita
    de um programa que receba:

    - A quantidade total de matéria-prima disponível no dia (sempre será um valor inteiro).
    - A quantidade de fardos de cada tipo que deseja produzir.

    O programa deve verificar se a quantidade de matéria-prima é suficiente para o planejamento.
    Se for suficiente, ele informa a quantidade de matéria-prima restante. Caso contrário,
    o programa deve sugerir a remoção de fardos do planejamento, começando pelos maiores (tipo 3)
    até que a matéria-prima seja suficiente.

    Exemplo: Se a empresa tem 40 kg de matéria-prima, mas o planejamento exige 71 kg,
    o programa deve sugerir a retirada de fardos para reduzir 31 kg, o que pode ser feito retirando:

    - 1 fardo do tipo 1 (1 kg),
    - 1 fardo do tipo 2 (3 kg),
    - 3 fardos do tipo 3 (27 kg).

    Isso ajusta o consumo para os 40 kg disponíveis.
*/