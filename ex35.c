#include <stdio.h>

int main()
{
    int publico;
    float popular=1, geral=5, arquibancada=10, cadeiras=20, rendaTotal;
    
    scanf("%d", &publico);
    popular= (publico*10/100)*popular;
    geral=(publico*50/100)*geral;
    arquibancada=(publico*30/100)*arquibancada;
    cadeiras=(publico*10/100)*cadeiras;
    rendaTotal= popular+geral+arquibancada+cadeiras;
    
    printf("R$ %.2f", rendaTotal);
    
    
    return 0;
}