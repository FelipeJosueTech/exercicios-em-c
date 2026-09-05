/* Enunciado: leia dez inteiros e conte quantos sao pares e quantos sao impares. */
#include <stdio.h>
int main(void)      {
    int n,pares=0;
    for(int i=0;i<10;i++)      {
        scanf("%d",&n);
        if(n%2==0)
            pares++;
    }
    printf("Pares: %d\nImpares: %d\n",pares,10-pares);
    return 0;
}
