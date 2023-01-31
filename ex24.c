#include <stdio.h>

int main()
{
    int pontAtual, numFases, pontos, soma=0;
    
    scanf("%d%d", &pontAtual, &numFases);
    
    for(int i=1; i<=numFases; i++)
    {
        scanf("%d", &pontos);
        soma+=pontos;
    }
    pontos=soma+pontAtual;
    if(pontos>100)
    {
       printf("100");
    }
    if(pontos<0)
    {
        printf("0");
    }
    if(pontos>0 && pontos<=100)
    {
        printf("%d", pontos);
    }
        
    return 0;
}
