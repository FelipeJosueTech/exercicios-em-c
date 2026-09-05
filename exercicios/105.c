/* Enunciado: leia notas ate -1 e mostre quantidade, ordens, soma, media e contagens solicitadas. */
#include <stdio.h>
int main(void)      {
    double v[1000],n,s=0;
    int q=0,acima=0,abaixo=0;
    while(q<1000&&scanf("%lf",&n)==1&&n!=-1)      {
        v[q++]=n;
        s+=n;
    }
    if(q)      {
        double media=s/q;
        for(int i=0;i<q;i++)      {
            printf("%.2f ",v[i]);
            if(v[i]>media)
                acima++;
            if(v[i]<7)
                abaixo++;
        }
        printf("\n");
        for(int i=q-1;i>=0;i--)
            printf("%.2f\n",v[i]);
        printf("Quantidade: %d\nSoma: %.2f\nMedia: %.2f\nAcima da media: %d\nAbaixo de sete: %d\n",q,s,media,acima,abaixo);
    }
    return 0;
}
