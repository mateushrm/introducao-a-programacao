#include <stdio.h>
int main()
{
    char nome1[21], nome2[21];
    int voto1, voto2, total;
    float perc1, perc2;
    
    scanf("%s%s", nome1, nome2);
    scanf("%d%d", &voto1, &voto2);
    total= voto1+voto2;
    perc1= (float)voto1/total*100;
    perc2= (float)voto2/total*100;
    
    if(voto1==voto2)
    {
        printf("Empate");
        
    }
    if(voto1>voto2)
    {
        printf("%s %.2f %s %.2f", nome1, perc1, nome2, perc2);
    }
    if(voto1<voto2)
    {
        printf("%s %.2f %s %.2f", nome2, perc2, nome1, perc1);
    }
    return 0;
}