#include <stdio.h>

int main()
{
   int itens, tipoItem, soma=0;
   scanf("%d", &itens);
   for(int i=1; i<=itens; i++)
   {
       scanf("%d", &tipoItem);
       if(tipoItem==0)
       {
           soma+=1;
       }
       if(tipoItem==2)
       {
           soma=0;
       }
   }
   printf("%d", soma);
    return 0;
}
