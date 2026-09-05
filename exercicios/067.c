/* Enunciado: mostre todos os primos entre 1 e N e o numero de divisoes executadas. */
#include <stdio.h>
int main(void)      {
    int n,divisoes=0;
    scanf("%d",&n);
    for(int x=2;x<=n;x++)      {
        int primo=1;
        for(int d=2;d*d<=x;d++)      {
            divisoes++;
            if(x%d==0)      {
                primo=0;
                break;
            }
        }
        if(primo)
            printf("%d ",x);
    }
    printf("\nDivisoes: %d\n",divisoes);
    return 0;
}
