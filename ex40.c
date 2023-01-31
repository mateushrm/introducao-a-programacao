#include <stdio.h>

int main()
{
    float investimento, d1, d2, d3, d4, valor1, valor2, valor3, valor4, acao;
    scanf("%f%f%f%f%f", &investimento, &d1, &d2, &d3, &d4);
    
    valor1= investimento+(investimento*d1/100);
    valor2= valor1+(valor1*d2/100);
    valor3= valor2+(valor2*d3/100);
    valor4= valor3+(valor3*d4/100);
    acao= valor4;
    
    printf("%.2f", acao);
    
    return 0;
}