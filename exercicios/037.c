/* Enunciado: leia um inteiro entre 0 e 1000 e imprima centenas, dezenas e unidades. */
#include <stdio.h>
int main(void)      {
    int n;
    scanf("%d",&n);
    if(n<=0||n>=1000)      {
        printf("Valor invalido\n");
        return 0;
    }
    printf("%d centenas, %d dezenas e %d unidades\n",n/100,n/10%10,n%10);
    return 0;
}
