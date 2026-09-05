/* Enunciado: entre trinta alunos, conte os maiores de 13 anos com altura abaixo da media. */
#include <stdio.h>
int main(void)      {
    int idade[30],cont=0;
    double altura[30],soma=0;
    for(int i=0;i<30;i++)      {
        scanf("%d %lf",&idade[i],&altura[i]);
        soma+=altura[i];
    }
    for(int i=0;i<30;i++)
        if(idade[i]>13&&altura[i]<soma/30)cont++;
    printf("Alunos: %d\n",cont);
    return 0;
}
