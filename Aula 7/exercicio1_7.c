#include <stdio.h>

int main()
{
    int codOperario = 111;
    int codAnalista = 122;
    int codEngenheiro = 133;
    float salarioOperario = 2500.37;
    float salarioAnalista = 4670;
    float salarioEngenheiro = 7900.91;
    float ajusteOperario = 0.15;
    float ajusteAnalista = 0.135;
    float ajusteEngenheiro = 0.14;
    int codigoFuncionario;

    printf("Entre com o codigo da funcao do colaborador: ");
    scanf("%d", &codigoFuncionario);

    if (codigoFuncionario == codOperario)
    {
        salarioOperario = salarioOperario + (salarioOperario * ajusteOperario);
        printf("O novo salario do operador sera de %.2f Reais", salarioOperario);
    }
    else if (codigoFuncionario == codAnalista)
    {
        salarioAnalista = salarioAnalista + (salarioAnalista * ajusteAnalista);
        printf("O novo salario do analista sera de %.2f Reais", salarioAnalista);
    }
    else if (codigoFuncionario == codEngenheiro)
    {
        salarioEngenheiro = salarioEngenheiro + (salarioEngenheiro * ajusteEngenheiro);
        printf("O novo salario do engenheiro sera de %.2f Reais", salarioEngenheiro);
    }
    else
    {
        printf("Codigo inexistente");
    }

    return 0;
}