/* Enunciado: conte votos para jogadores 1 a 23 ate zero, ignore invalidos e mostre percentuais. */
#include <stdio.h>
double percentual(int votos,int total)      {
    return total?100.0*votos/total:0;
}
int main(void)      {
    int votos[24]=      {
        0
    }
    ,j,total=0,melhor=0;
    while(scanf("%d",&j)==1&&j)      {
        if(j<1||j>23)
            continue;
        votos[j]++;
        total++;
    }
    for(j=1;j<=23;j++)if(votos[j])      {
        printf("Jogador %d: %d (%.2f%%)\n",j,votos[j],percentual(votos[j],total));
        if(votos[j]>votos[melhor])
            melhor=j;
    }
    printf("Total: %d\nMelhor jogador: %d\n",total,melhor);
    return 0;
}
