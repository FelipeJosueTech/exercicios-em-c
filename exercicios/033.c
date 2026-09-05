/* Enunciado: leia tres lados, verifique se formam triangulo e classifique-o. */
#include <stdio.h>
int main(void)      {
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b<=c||a+c<=b||b+c<=a)
        printf("Nao formam triangulo\n");
    else if(a==b&&b==c)
        printf("Equilatero\n");
    else if(a==b||a==c||b==c)
        printf("Isosceles\n");
    else
        printf("Escaleno\n");
    return 0;
}
