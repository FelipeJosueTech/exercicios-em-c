/* Enunciado: determine se um numero inteiro e primo. */
#include <stdio.h>
int main(void)      {
    int n,primo=1;
    scanf("%d",&n);
    if(n<2)
        primo=0;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)primo=0;
    printf("%s\n",primo?"Primo":"Nao primo");
    return 0;
}
