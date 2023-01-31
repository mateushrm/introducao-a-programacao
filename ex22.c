#include <stdio.h>

int main()
{
    int bandejas, copos, latas, quebrados, soma=0;
    scanf("%d", &bandejas);
    for(int i=1; i<=bandejas; i++)
    {
        scanf("%d %d", &latas, &copos);
        if(latas>copos)
        {
            quebrados=copos;
        }
        else
        {
          quebrados=0;  
        }
        if(latas==copos)
        {
            quebrados=0;
        }
        soma+=quebrados;
    }
    printf("%d", soma);
    return 0;
}
