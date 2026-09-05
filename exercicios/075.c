/* Enunciado: implemente uma caixa registradora que recebe produtos ate zero, calcula total e troco e repete. */
#include <stdio.h>
int main(void)      {
    double produto,total,dinheiro;
    for(;;)      {
        total=0;
        for(;;)      {
            scanf("%lf",&produto);
            if(produto==0)
                break;
            total+=produto;
        }
        if(total==0)
            break;
        scanf("%lf",&dinheiro);
        printf("Total: R$ %.2f\nTroco: R$ %.2f\n",total,dinheiro-total);
    }
    return 0;
}
