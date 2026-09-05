/* Enunciado: leia dez inteiros e mostre a soma dos quadrados dos elementos. */
#include <stdio.h>
int main(void)      {
    int n;
    long long soma=0;
    for(int i=0;i<10;i++)      {
        scanf("%d",&n);
        soma+=(long long)n*n;
    }
    printf("Soma dos quadrados: %lld\n",soma);
    return 0;
}
