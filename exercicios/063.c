/* Enunciado: altere o exercicio anterior aceitando apenas numeros entre 0 e 1000. */
#include <stdio.h>
int main(void)      {
    int n;
    double x,menor=1001,maior=0,soma=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)      {
        do
            scanf("%lf",&x);
        while(x<0||x>1000)
            ;
        if(x<menor)
            menor=x;
        if(x>maior)
            maior=x;
        soma+=x;
    }
    if(n>0)
        printf("Menor: %.2f\nMaior: %.2f\nSoma: %.2f\n",menor,maior,soma);
    return 0;
}
