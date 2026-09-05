/* Enunciado: leia um numero e informe se ele e inteiro ou decimal. */
#include <stdio.h>
#include <math.h>
int main(void)      {
    double n;
    scanf("%lf",&n);
    printf("%s\n",n==floor(n)?"Inteiro":"Decimal");
    return 0;
}
