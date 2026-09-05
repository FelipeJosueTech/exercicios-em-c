/* Enunciado: armazene vinte inteiros nos vetores original, PAR e IMPAR e imprima-os. */
#include <stdio.h>
int main(void)      {
    int v[20],par[20],impar[20],np=0,ni=0;
    for(int i=0;i<20;i++)      {
        scanf("%d",&v[i]);
        if(v[i]%2==0)
            par[np++]=v[i];
        else
            impar[ni++]=v[i];
    }
    for(int i=0;i<20;i++)
        printf("%d ",v[i]);
    printf("\n");
    for(int i=0;i<np;i++)
        printf("%d ",par[i]);
    printf("\n");
    for(int i=0;i<ni;i++)
        printf("%d ",impar[i]);
    printf("\n");
    return 0;
}
