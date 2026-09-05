/* Enunciado: leia cinco numeros e informe a soma e a media. */
#include <stdio.h>
int main(void)      {
    double n,soma=0;
    for(int i=0;i<5;i++)      {
        scanf("%lf",&n);
        soma+=n;
    }
    printf("Soma: %.2f\nMedia: %.2f\n",soma,soma/5);
    return 0;
}
