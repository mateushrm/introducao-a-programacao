#include <stdio.h>

int main()
{
    float fah, celsius;
    
    scanf("%f", &fah);
    
    celsius = (fah-32)/1.8;
    
    printf("%.2f", celsius);
    
    return 0;
}
