/* Enunciado: monte uma tabuada com numero, inicio e fim informados, validando o fim. */
#include <stdio.h>
int main(void)      {
    int n,inicio,fim;
    scanf("%d %d %d",&n,&inicio,&fim);
    if(fim<inicio)      {
        printf("Fim invalido\n");
        return 0;
    }
    for(int i=inicio;i<=fim;i++)
        printf("%d X %d = %d\n",n,i,n*i);
    return 0;
}
