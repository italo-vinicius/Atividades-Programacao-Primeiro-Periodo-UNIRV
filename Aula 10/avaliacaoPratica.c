#include <stdio.h>

int main()
{
    float magnitude;

    printf("Digite a magnitude do terremoto: ");
    scanf("%f", &magnitude);

    if(magnitude  >= 3.0 && magnitude <= 3.9)
    {
        printf("CATEGORIA: Pequeno\nIMPACTO: Pode ser sentido");
    }
    else if(magnitude  >= 4.0 && magnitude <= 4.9)
    {
        printf("CATEGORIA: Leve\nIMPACTO: Provavelmente sentido");
    }
    else if(magnitude  >= 5.0 && magnitude <= 5.9)
    {
        printf("CATEGORIA: Moderado\nIMPACTO: Danos menores podem ocorrer");
    }
    else if(magnitude  >= 6.0 && magnitude <= 6.9)
    {
        printf("CATEGORIA: Forte\nIMPACTO: Danos podem ocorrer");
    }
    else if(magnitude  >= 7.0 && magnitude <= 7.9)
    {
        printf("CATEGORIA: Grande\nIMPACTO: Danos esperados");
    }
    else if(magnitude  >= 8.0)
    {
        printf("CATEGORIA: Imenso\nIMPACTO: Danos significativos esperados");
    }
    else
    {
        printf("Sem dados");
    }

    return 0;
}