#include <stdio.h>

int main()
{
    int dedosBino, dedosCino, resultado;
    scanf("%d%d", &dedosBino, &dedosCino);
    resultado= dedosBino+dedosCino;
    
    if(resultado == 2 || resultado== 4 || resultado == 6 || resultado == 8)
    {
        printf("Bino");
    }
    else
    {
     printf("Cino");
    }

    return 0;
}
