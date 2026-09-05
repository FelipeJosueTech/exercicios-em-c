/* Enunciado: leia os precos de tres produtos e informe qual deve ser comprado, o mais barato. */
#include <stdio.h>
int main(void)       {
    double p[3];
    int menor=0;
    scanf("%lf %lf %lf",&p[0],&p[1],&p[2]);
    for(int i=1;i<3;i++)         if(p[i]<p[menor])
        menor=i;
    printf("Compre o produto %d (R$ %.2f)\n",menor+1,p[menor]);
    return 0;
}
