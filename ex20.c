#include <stdio.h>

int main()
{
    int num, maiorNum;
    
    scanf("%d", &num);
    maiorNum=num;
    while(num!=0)
    {
        scanf("%d", &num);
       
        if(num>maiorNum)
        {
            maiorNum=num;
        }
    }
    printf("%d", maiorNum);

    return 0;
}
