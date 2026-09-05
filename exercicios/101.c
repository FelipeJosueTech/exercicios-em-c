/* Enunciado: intercale dois vetores de dez elementos em um vetor de vinte. */
#include <stdio.h>
int main(void)      {
    int a[10],b[10],c[20];
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<10;i++)
        scanf("%d",&b[i]);
    for(int i=0;i<10;i++)      {
        c[2*i]=a[i];
        c[2*i+1]=b[i];
    }
    for(int i=0;i<20;i++)
        printf("%d%s",c[i],i==19?"\n":" ");
    return 0;
}
