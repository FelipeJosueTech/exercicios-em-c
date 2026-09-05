/* Enunciado: leia cinco inteiros e mostre a soma, a multiplicacao e os numeros. */
#include <stdio.h>
int main(void)      {
    int n, soma=0, produto=1;
    for(int i=0;i<5;i++)      {
        scanf("%d",&n);
        soma+=n;
        produto*=n;
        printf("%d ",n);
    }
    printf("\nSoma: %d\nMultiplicacao: %d\n",soma,produto);
    return 0;
}
