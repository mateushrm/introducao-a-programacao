#include <stdio.h>

int main()
{
    int numFuncionarios;
    float salario, soma=0, media;
    scanf("%d", &numFuncionarios);
    for(int i=0; i<numFuncionarios; i++)
    {
        scanf("%f", &salario);
        soma+=salario;
    }
    media= soma/numFuncionarios;
    printf("%.2f\n%.2f", soma, media);

    return 0;
}
