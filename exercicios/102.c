/* Enunciado: intercale tres vetores de dez elementos em um vetor de trinta. */
#include <stdio.h>
int main(void)      {
    int v[3][10],c[30];
    for(int j=0;j<3;j++)
        for(int i=0;i<10;i++)scanf("%d",&v[j][i]);
    for(int i=0;i<10;i++)
        for(int j=0;j<3;j++)c[3*i+j]=v[j][i];
    for(int i=0;i<30;i++)
        printf("%d%s",c[i],i==29?"\n":" ");
    return 0;
}
