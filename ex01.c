
#include <stdio.h>

int main()
{
    char disciplina[21];
    int alunos;
    float media;
    
    printf("Disciplina:");
    scanf("%s", disciplina);
    
    printf("Qtde de alunos:");
    scanf("%d", &alunos);

    printf("Media da turma:");
    scanf("%f", &media);
    
    printf("A disciplina %s possui %d alunos. A media da turma e %.1f.", disciplina, alunos, media);
    

    return 0;
	
}