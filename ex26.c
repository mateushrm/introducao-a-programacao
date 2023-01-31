#include <stdio.h>

int main()
{
    int qntdAlunos;
    scanf("%d", &qntdAlunos);
    float notas[qntdAlunos], maiorNota;
    
    for(int i=0; i<qntdAlunos; i++)
    {
        scanf("%f", &notas[i]);
        if(i==0)
        {
            maiorNota=notas[i];
        }
        else
        {
            if(notas[i]>maiorNota)
            {
                maiorNota=notas[i];
            }
        }
    }
    for(int i=0; i<qntdAlunos; i++)
    {
        if(notas[i]==maiorNota)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
