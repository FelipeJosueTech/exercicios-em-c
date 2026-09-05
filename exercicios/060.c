/* Enunciado: gere os n termos da serie de Fibonacci. */
#include <stdio.h>
int main(void)      {
    int n;
    long long a=1,b=1,proximo;
    scanf("%d",&n);
    for(int i=0;i<n;i++)      {
        printf("%lld%s",a,i==n-1?"\n":", ");
        proximo=a+b;
        a=b;
        b=proximo;
    }
    return 0;
}
