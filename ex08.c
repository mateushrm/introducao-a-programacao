
#include <stdio.h>

int main()
{
   int inteiro1, inteiro2, inteiro3;
   scanf("%d%d%d", &inteiro1, &inteiro2, &inteiro3);

    if(inteiro1==inteiro2 && inteiro1==inteiro3)
    {
       printf("%d", inteiro1);
   }
   if(inteiro1>inteiro2 && inteiro1>inteiro3)
   {
       printf("%d", inteiro1);
   }
   if(inteiro2>inteiro1 && inteiro2>inteiro3)
   {
       printf("%d", inteiro2);
   }
   if(inteiro3>inteiro2 && inteiro3>inteiro1)
   {
       printf("%d", inteiro3);
   }
    return 0;
}
