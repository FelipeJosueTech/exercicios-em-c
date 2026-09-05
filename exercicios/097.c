/* Enunciado: leia quatro notas de dez alunos e conte medias maiores ou iguais a 7. */
#include <stdio.h>
int main(void)      {
    double nota,soma;
    int aprovados=0;
    for(int i=0;i<10;i++)      {
        soma=0;
        for(int j=0;j<4;j++)      {
            scanf("%lf",&nota);
            soma+=nota;
        }
        if(soma/4>=7)
            aprovados++;
    }
    printf("Aprovados: %d\n",aprovados);
    return 0;
}
