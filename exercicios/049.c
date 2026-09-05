/* Enunciado: calcule quantos anos sao necessarios para a populacao A ultrapassar ou igualar B. */
#include <stdio.h>
int main(void)      {
    double a=80000,b=200000;
    int anos=0;
    while(a<b)      {
        a*=1.03;
        b*=1.015;
        anos++;
    }
    printf("%d anos\n",anos);
    return 0;
}
