#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a==b || a == c || b==c ||(a+b)==c||(b+c)==a || (c+a) == b ||(a-b)==c||(b-c)==a || (c-a) == b || (b-a)==c||(c-b)==a || (a-c) == b)
    {
        printf("S");
    }
    else
    {
        printf("N");
    }
    return 0;
}
