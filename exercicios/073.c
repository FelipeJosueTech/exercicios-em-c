/* Enunciado: monte a tabela de precos de 1 a 50 produtos a R$ 1,99 cada. */
#include <stdio.h>
int main(void)      {
    for(int i=1;i<=50;i++)
        printf("%d - R$ %.2f\n",i,i*1.99);
    return 0;
}
