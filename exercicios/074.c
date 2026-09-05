/* Enunciado: monte a tabela de precos de 1 a 50 paes a partir do preco informado. */
#include <stdio.h>
int main(void)      {
    double preco;
    scanf("%lf",&preco);
    for(int i=1;i<=50;i++)
        printf("%d - R$ %.2f\n",i,i*preco);
    return 0;
}
