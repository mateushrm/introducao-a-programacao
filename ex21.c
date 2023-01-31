#include <stdio.h>

int main()
{
    int a, b, anosDiferenca=0;
    float g1, g2;
    scanf("%d%d%f%f", &a, &b, &g1, &g2);
    
    while(b>=a)
    {
        a= (a*g1/100)+a;
        b= (b*g2/100)+b;
        anosDiferenca += 1;
    }
    if(anosDiferenca>100)
    {
        printf("Mais de 1 seculos");
    }
    else
    {
        printf("%d anos", anosDiferenca);
    }
    return 0;
}
