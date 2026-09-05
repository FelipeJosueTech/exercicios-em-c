/* Enunciado: compare respostas de alunos com gabarito de dez questoes e mostre estatisticas da turma. */
#include <stdio.h>
int main(void)      {
    char g[10],r;
    int alunos=0,acertos,maior=0,menor=10,total=0;
    for(int i=0;i<10;i++)
        scanf(" %c",&g[i]);
    while(scanf(" %c",&r)==1)      {
        if(r=='-')
            break;
        acertos=(r==g[0]);
        for(int i=1;i<10;i++)      {
            scanf(" %c",&r);
            if(r==g[i])
                acertos++;
        }
        if(acertos>maior)
            maior=acertos;
        if(acertos<menor)
            menor=acertos;
        total+=acertos;
        alunos++;
        scanf(" %c",&r);
        if(r!='s'&&r!='S')
            break;
    }
    if(alunos)
        printf("Maior: %d\nMenor: %d\nAlunos: %d\nMedia: %.2f\n",maior,menor,alunos,(double)total/alunos);
    return 0;
}
