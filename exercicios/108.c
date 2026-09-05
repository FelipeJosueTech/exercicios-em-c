/* Enunciado: tabule votos sobre sistemas operacionais ate zero e informe percentuais e vencedor. */
#include <stdio.h>
int main(void)      {
    const char *nomes[]=      {
        "Windows Server","Unix","Linux","Netware","Mac OS","Outro"
    }
    ;
    int v[6]=      {
        0
    }
    ,op,total=0,melhor=0;
    while(scanf("%d",&op)==1&&op)      {
        if(op<1||op>6)
            continue;
        v[op-1]++;
        total++;
    }
    for(int i=0;i<6;i++)      {
        printf("%-16s %d %.2f%%\n",nomes[i],v[i],total?100.0*v[i]/total:0);
        if(v[i]>v[melhor])
            melhor=i;
    }
    printf("Total: %d\nMais votado: %s\n",total,nomes[melhor]);
    return 0;
}
