/* Enunciado: mostre os n termos de S=1/1+2/3+3/5+... e a soma da serie. */
#include <stdio.h>
int main(void)      {
    int n;
    double soma=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)      {
        double termo=(double)i/(2*i-1);
        soma+=termo;
        printf("%.4f%s",termo,i==n?"\n":" + ");
    }
    printf("Soma: %.4f\n",soma);
    return 0;
}
