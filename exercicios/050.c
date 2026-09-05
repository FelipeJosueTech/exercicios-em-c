/* Enunciado: permita informar populacoes e taxas de crescimento, valide e repita a operacao. */
#include <stdio.h>
int main(void)      {
    double a,b,ta,tb;
    char repetir;
    do      {
        do
            scanf("%lf %lf %lf %lf",&a,&b,&ta,&tb);
        while(a<=0||b<=0||ta<=0||tb<=0||a>=b||ta<=tb)
            ;
        int anos=0;
        while(a<b)      {
            a*=1+ta/100;
            b*=1+tb/100;
            anos++;
        }
        printf("%d anos\n",anos);
        scanf(" %c",&repetir);
    }
    while(repetir=='s'||repetir=='S')
        ;
    return 0;
}
