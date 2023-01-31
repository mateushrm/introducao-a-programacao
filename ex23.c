#include <stdio.h>

int main()
{
    int num, cont = 0;
    scanf("%d", &num);
    for (int i = 1; i<=num; i++) 
    {
        if(num%i == 0) 
        {
            cont += 1;
        } 
    } 
    if(cont==2) 
    {
        printf("S");
    } else 
    {
        printf("N");
    }
    return 0;
}