#include <stdio.h>

int main()
{
    int hora, minuto, segundo;
    
    scanf("%d", &hora);
    scanf("%d", &minuto);
    
    segundo= (hora*60+minuto)*60;
    
    printf("%d", segundo);
    return 0;
}