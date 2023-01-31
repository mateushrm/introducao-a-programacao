#include <stdio.h>

int main()
{
    int competidores, notaMinima, nota1, nota2, notaTotal, convidados=0;
    scanf("%d%d", &competidores, &notaMinima);
    
    for(int i=1; i<=competidores; i++)
    {
        scanf("%d%d", &nota1, &nota2);
        notaTotal=nota1+nota2;
        
        if(notaTotal>=notaMinima)
        {
            convidados+=1;
        }
    
    }
    
  printf("%d", convidados);
    
    return 0;
}
