/* Enunciado: processe cinco cidades, encontre indices extremos, media de veiculos e acidentes abaixo de 2000 veiculos. */
#include <stdio.h>
int main(void)      {
    int codigo,veiculos,acidentes,maiorc=0,menorc=0,soma_v=0,soma_a=0,q=0;
    double maior=-1,menor=1e99;
    for(int i=0;i<5;i++)      {
        scanf("%d %d %d",&codigo,&veiculos,&acidentes);
        double indice=(double)acidentes/veiculos;
        if(indice>maior)      {
            maior=indice;
            maiorc=codigo;
        }
        if(indice<menor)      {
            menor=indice;
            menorc=codigo;
        }
        soma_v+=veiculos;
        if(veiculos<2000)      {
            soma_a+=acidentes;
            q++;
        }
    }
    printf("Maior indice: %.2f cidade %d\nMenor indice: %.2f cidade %d\nMedia veiculos: %.2f\nMedia acidentes abaixo de 2000: %.2f\n",maior,maiorc,menor,menorc,(double)soma_v/5,q?(double)soma_a/q:0);
    return 0;
}
