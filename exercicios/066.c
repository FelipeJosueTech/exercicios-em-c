/* Enunciado: informe se o numero e primo e, se nao for, seus divisores. */
#include <stdio.h>
int main(void)      {
    int n,divisores=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)if(n%i==0)      {
        divisores++;
        if(i!=1&&i!=n)
            printf("%d ",i);
    }
    printf("\n%s\n",divisores==2?"Primo":"Nao primo");
    return 0;
}
