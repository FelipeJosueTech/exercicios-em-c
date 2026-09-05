/* Enunciado: calcule as raizes reais de ax2+bx+c, tratando a igual a zero e delta negativo ou zero. */
#include <stdio.h>
#include <math.h>
int main(void)      {
    double a,b,c,d;
    scanf("%lf",&a);
    if(a==0)      {
        printf("Nao e equacao de segundo grau\n");
        return 0;
    }
    scanf("%lf %lf",&b,&c);
    d=b*b-4*a*c;
    if(d<0)
        printf("Nao possui raizes reais\n");
    else if(d==0)
        printf("Uma raiz: %.2f\n",-b/(2*a));
    else
        printf("Raizes: %.2f e %.2f\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
    return 0;
}
