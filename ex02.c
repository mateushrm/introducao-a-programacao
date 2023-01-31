#include <stdio.h>

int main()
{
    float custoFabrica, distribuidor, impostos, custoFinal;
    scanf("%f", &custoFabrica);
    distribuidor=custoFabrica*28/100;
    impostos= custoFabrica*45/100;
    custoFinal= custoFabrica+distribuidor+impostos;
    
    printf("%.2f", custoFinal);
    
    return 0;
}