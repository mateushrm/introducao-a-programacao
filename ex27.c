#include <stdio.h>

int main()
{
    int celulas;
    scanf("%d", &celulas);
    int tabuleiro[celulas], soma=0;
    
    for(int i = 0; i<celulas; i++)
    {
        scanf("%d", &tabuleiro[i]);
    }
    for(int i = 0; i<celulas; i++)
    {
        if(i == 0)
        {
            soma= tabuleiro[i]+tabuleiro[1];
        }
        else
        {
        if(i == celulas-1)
        {
            soma= tabuleiro[i]+tabuleiro[i-1];
        }
        else{
            soma=tabuleiro[i]+tabuleiro[i-1]+tabuleiro[i+1];
        }
        }
        printf("%d\n", soma);
    }

    return 0;
}
