#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5, total, maior, menor;
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
    
    total=n1+n2+n3+n4+n5;
    maior = n1;
    if(n2>=n1 && n2>=n3 && n2>=n4 && n2>=n5)
    {
        maior=n2;
    }
    if(n3>=n1 && n3>=n2 && n3>=n4 && n3>=n5)
    {
        maior=n3;
    }
    if(n4>n1 && n4>n3 && n4>n2 && n4>n5)
    {
        maior=n4;
    }
    if(n5>=n1 && n5>=n3 && n5>=n4 && n5>=n2)
    {
        maior=n5;
    }
    
    menor = n1;
    if(n2<=n1 && n2<=n3 && n2<=n4 && n2<=n5)
    {
        menor=n2;
    }
    if(n3<=n1 && n3<=n2 && n3<=n4 && n3<=n5)
    {
        menor=n3;
    }
    if(n4<=n1 && n4<=n2 && n4<=n3 && n4<=n5)
    {
        menor=n4;
    }
    if(n5<=n1 && n5<=n2 && n5<=n4 && n5<=n3)
    {
        menor=n5;
    }
    total= total-(maior+menor);
    printf("%d", total);
    return 0;
}
