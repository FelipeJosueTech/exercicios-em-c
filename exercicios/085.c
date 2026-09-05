/* Enunciado: conte votos de quatro candidatos, nulos e brancos ate codigo zero e calcule percentuais. */
#include <stdio.h>
int main(void)      {
    int codigo,v[4]=      {
        0
    }
    ,nulo=0,branco=0,total=0;
    while(scanf("%d",&codigo)==1&&codigo)      {
        if(codigo>=1&&codigo<=4)
            v[codigo-1]++;
        else if(codigo==5)
            nulo++;
        else if(codigo==6)
            branco++;
        else
            continue;
        total++;
    }
    for(int i=0;i<4;i++)
        printf("Candidato %d: %d\n",i+1,v[i]);
    printf("Nulos: %d (%.2f%%)\nBrancos: %d (%.2f%%)\n",nulo,total?100.0*nulo/total:0,branco,total?100.0*branco/total:0);
    return 0;
}
