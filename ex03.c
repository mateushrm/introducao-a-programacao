#include <stdio.h>

int main()
{
    char nomeEst[21];
    int numMat;
    float n1, n2, media, freq;
    
    printf("Nome:");
    scanf("%s", nomeEst);
    
    printf("Matricula:");
    scanf("%d", &numMat);

    printf("N1:");
    scanf("%f", &n1);
    
    printf("N2:");
    scanf("%f", &n2);

    printf("Media:");
    scanf("%f", &media);
    
    printf("Frequencia:");
    scanf("%f", &freq);
    
    printf("Nome: %s\nMatricula: %d\nN1: %.1f\nN2: %.1f\nMedia: %.1f\nFrequencia: %.1f", nomeEst, numMat, n1, n2, media, freq);
    

    return 0;
}