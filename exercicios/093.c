/* Enunciado: leia dez numeros reais e mostre-os na ordem inversa. */
#include <stdio.h>
int main(void)      {
    double v[10];
    for(int i=0;i<10;i++)
        scanf("%lf",&v[i]);
    for(int i=9;i>=0;i--)
        printf("%.2f%s",v[i],i==0?"\n":" ");
    return 0;
}
