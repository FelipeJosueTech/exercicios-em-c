/* Enunciado: leia um vetor de cinco inteiros e mostre seus elementos. */
#include <stdio.h>
int main(void)      {
    int v[5];
    for(int i=0;i<5;i++)
        scanf("%d",&v[i]);
    for(int i=0;i<5;i++)
        printf("%d%s",v[i],i==4?"\n":" ");
    return 0;
}
