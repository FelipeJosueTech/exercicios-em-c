/* Enunciado: leia um numero inteiro positivo e mostre-o invertido. */
#include <stdio.h>
int main(void)      {
    long long n,invertido=0;
    scanf("%lld",&n);
    while(n>0)      {
        invertido=invertido*10+n%10;
        n/=10;
    }
    printf("%lld\n",invertido);
    return 0;
}
