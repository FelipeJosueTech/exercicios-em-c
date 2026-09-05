/* Enunciado: leia codigo, altura e peso de clientes ate codigo zero e informe extremos e medias. */
#include <stdio.h>
int main(void)      {
    int codigo,alto=0,baixo=0,gordo=0,magro=0,n=0;
    double altura,peso,soma_a=0,soma_p=0,va=0,vb=0,vg=0,vm=0;
    while(scanf("%d",&codigo)==1&&codigo)      {
        scanf("%lf %lf",&altura,&peso);
        if(!n||altura>va)      {
            va=altura;
            alto=codigo;
        }
        if(!n||altura<vb)      {
            vb=altura;
            baixo=codigo;
        }
        if(!n||peso>vg)      {
            vg=peso;
            gordo=codigo;
        }
        if(!n||peso<vm)      {
            vm=peso;
            magro=codigo;
        }
        soma_a+=altura;
        soma_p+=peso;
        n++;
    }
    if(n)
        printf("Alto: %d %.2f\nBaixo: %d %.2f\nGordo: %d %.2f\nMagro: %d %.2f\nMedias: %.2f %.2f\n",alto,va,baixo,vb,gordo,vg,magro,vm,soma_a/n,soma_p/n);
    return 0;
}
