/* Enunciado: leia temperaturas ate -1 e informe menor, maior e media. */
#include <stdio.h>
int main(void)      {
    double t,menor=0,maior=0,soma=0;
    int n=0;
    while(scanf("%lf",&t)==1&&t!=-1)      {
        if(!n||t<menor)
            menor=t;
        if(!n||t>maior)
            maior=t;
        soma+=t;
        n++;
    }
    if(n)
        printf("Menor: %.2f\nMaior: %.2f\nMedia: %.2f\n",menor,maior,soma/n);
    return 0;
}
