#include <stdio.h>

int main()
{
    int d1, h1, m1, d2, h2, m2, total;
    scanf("%d%d%d%d%d%d", &d1, &h1, &m1, &d2, &h2, &m2);
    
    d1= d1*24*60*60;
    h1= h1*60*60;
    m1= m1*60;
    
    d2= d2*24*60*60;
    h2= h2*60*60;
    m2= m2*60;
    
    total= (d2+h2+m2)-(d1+h1+m1);
    printf("%d", total);
    return 0;
}
