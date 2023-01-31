#include <stdio.h>

int main()
{
    int T1, T2, T3, T4, maxAparelhos;
    scanf("%d%d%d%d", &T1, &T2, &T3, &T4);
    maxAparelhos= --T1+--T2+--T3+T4;
    
    printf("%d",maxAparelhos);
    
    
    return 0;
}