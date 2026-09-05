/* Enunciado: leia um numero inteiro e determine se ele e par ou impar. */
#include <stdio.h>
int main(void)      {
    int n;
    scanf("%d",&n);
    printf("%s\n",n%2==0?"Par":"Impar");
    return 0;
}
