/* Enunciado: mostre tabela de divida, juros, parcelas e valor da parcela para 1, 3, 6, 9 e 12 parcelas. */
#include <stdio.h>
int main(void)      {
    double divida;
    int parcelas[]=      {
        1,3,6,9,12
    }
    ;
    double juros[]=      {
        0,.10,.15,.20,.25
    }
    ;
    scanf("%lf",&divida);
    for(int i=0;i<5;i++)      {
        double total=divida*(1+juros[i]);
        printf("R$ %.2f R$ %.2f %d R$ %.2f\n",total,total-divida,parcelas[i],total/parcelas[i]);
    }
    return 0;
}
