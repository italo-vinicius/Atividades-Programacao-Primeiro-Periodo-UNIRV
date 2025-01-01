#include <stdio.h>

int main()
{
    char letras[6];
    int i;

    printf("Digite 6 letras quaisquer: ");
    scanf("%s", letras);

    for(i = 6; i >= 0; i--)
    {
        printf("%c\n", letras[i]);
    }

    return 0;
}