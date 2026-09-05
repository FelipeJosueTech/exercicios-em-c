/* Enunciado: calcule fatoriais varias vezes, aceitando inteiros positivos menores que 16. */
#include <stdio.h>
int main(void)      {
    int n;
    char r;
    do      {
        do
            scanf("%d",&n);
        while(n<0||n>=16)
            ;
        unsigned long long f=1;
        for(int i=2;i<=n;i++)
            f*=i;
        printf("%d! = %llu\n",n,f);
        scanf(" %c",&r);
    }
    while(r=='s'||r=='S')
        ;
    return 0;
}
