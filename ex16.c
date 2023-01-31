#include <stdio.h>

int main()
{
    int x, numImpar;
    scanf("%d", &x);
    
    for(int i=1 ; i<=x ; i++)
    {
        if(i%2>0)
        {
            numImpar=i;
            printf("%d\n", numImpar);
        }
    }
    return 0;
}
