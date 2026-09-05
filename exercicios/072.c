/* Enunciado: calcule o total investido e o valor medio gasto em uma colecao de CDs. */
#include <stdio.h>
int main(void)      {
    int n;
    double valor,total=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)      {
        scanf("%lf",&valor);
        total+=valor;
    }
    if(n)
        printf("Total: R$ %.2f\nMedia: R$ %.2f\n",total,total/n);
    return 0;
}
