/* Enunciado: gere a tabuada de um numero inteiro entre 1 e 10. */
#include <stdio.h>
int main(void)      {
    int n;
    scanf("%d",&n);
    if(n<1||n>10)      {
        printf("Numero invalido\n");
        return 0;
    }
    for(int i=1;i<=10;i++)
        printf("%d X %d = %d\n",n,i,n*i);
    return 0;
}
