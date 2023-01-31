#include <stdio.h>

int main()
{
    int tipos, rotulos, menorNum, total;
    
    scanf("%d", &tipos);
    
    for(int i = 1; i<=tipos; i++)
    {
        scanf("%d", &rotulos);
        if(i==1)
        {
            total= menorNum;
        }
        else
        {
            if(rotulos<menorNum)
            {
                menorNum=rotulos;
            }
        }
    }
    total=menorNum;
    printf("%d", total);
    return 0;
}
