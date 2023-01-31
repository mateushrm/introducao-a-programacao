#include <stdio.h>

int main()
{
    int l1, l2, c1, c2, somaL, somaC;
    scanf("%d%d%d%d", &l1, &l2, &c1, &c2);
    somaL= l1+l2;
    somaC= c1+c2;
    
    if(l1==l2)
    {
        somaL= somaL*2;
    }
    if((l1-1)==l2 || (l2-1) == l1)
    {
        somaL= somaL*3;
    }
    if(c1==c2)
    {
        somaC= somaC*2;
    }
    if((c1-1)==c2 || (c2-1) == c1)
    {
        somaC= somaC*3;
    }
    
    if(somaL==somaC)
    {
        printf("Empate");
    }
    
    if(somaL>somaC)
    {
        printf("Lia");
    }
    
    if(somaC>somaL)
    {
        printf("Carolina");
    }
    
    return 0;
}
