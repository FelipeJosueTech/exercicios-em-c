/* Enunciado: dado um conjunto de N numeros, determine menor, maior e soma. */
#include <stdio.h>
int main(void)      {
    int n;
    double x,menor,maior,soma=0;
    scanf("%d",&n);
    if(n<=0)
        return 0;
    scanf("%lf",&x);
    menor=maior=x;
    soma=x;
    for(int i=1;i<n;i++)      {
        scanf("%lf",&x);
        if(x<menor)
            menor=x;
        if(x>maior)
            maior=x;
        soma+=x;
    }
    printf("Menor: %.2f\nMaior: %.2f\nSoma: %.2f\n",menor,maior,soma);
    return 0;
}
