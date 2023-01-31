#include <stdio.h>

int main()
{
    float qntdReais, cotacaoDolar, dolar;
    scanf("%f%f", &qntdReais, &cotacaoDolar);
    
    dolar = qntdReais/cotacaoDolar;
    
    printf("%.2f", dolar);
    
    return 0;
}