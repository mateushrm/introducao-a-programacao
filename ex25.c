#include <stdio.h>

int main()
{
    int num[10], x, y, soma;
    
    for(int i=0; i<10; i++)
    {
        scanf("%d", &num[i]);
    }
    scanf("%d", &x);
    scanf("%d", &y);
    x= num[x];
    y= num[y];
    soma= x+y;
    
    printf("%d", soma);

    return 0;
}
