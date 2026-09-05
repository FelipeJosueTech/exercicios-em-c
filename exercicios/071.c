/* Enunciado: calcule o numero medio de alunos por turma, limitando turmas a 40 alunos. */
#include <stdio.h>
int main(void)      {
    int turmas,alunos,soma=0;
    scanf("%d",&turmas);
    for(int i=0;i<turmas;i++)      {
        do
            scanf("%d",&alunos);
        while(alunos<0||alunos>40)
            ;
        soma+=alunos;
    }
    if(turmas)
        printf("Media: %.2f\n",(double)soma/turmas);
    return 0;
}
