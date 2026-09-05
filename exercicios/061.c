/* Enunciado: calcule o fatorial de um numero inteiro fornecido pelo usuario. */
#include <stdio.h>
int main(void)      {
    int n;
    unsigned long long f=1;
    scanf("%d",&n);
    if(n<0)      {
        printf("Invalido\n");
        return 0;
    }
    for(int i=2;i<=n;i++)
        f*=i;
    printf("%d! = %llu\n",n,f);
    return 0;
}
