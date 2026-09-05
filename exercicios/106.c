/* Enunciado: conte vendedores nas faixas salariais a partir de salario semanal 200+9% das vendas. */
#include <stdio.h>
int main(void)      {
    int v[9]=      {
        0
    }
    ;
    double vendas,salario;
    while(scanf("%lf",&vendas)==1&&vendas>=0)      {
        salario=200+.09*vendas;
        int faixa=(int)(salario/100)-2;
        if(faixa<0)
            faixa=0;
        if(faixa>8)
            faixa=8;
        v[faixa]++;
    }
    for(int i=0;i<9;i++)
        printf("%d-%d: %d\n",i<8?200+i*100:1000,i<8?299+i*100:0,v[i]);
    return 0;
}
