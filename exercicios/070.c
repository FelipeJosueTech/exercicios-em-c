/* Enunciado: conte os votos de tres candidatos entre o total informado de eleitores. */
#include <stdio.h>
int main(void)      {
    int n,votos[3]=      {
        0
    }
    ;
    scanf("%d",&n);
    for(int i=0;i<n;i++)      {
        scanf("%d",&votos[0]);
        if(votos[0]>=1&&votos[0]<=3)
            votos[votos[0]-1]++;
    }
    printf("Candidato 1: %d\nCandidato 2: %d\nCandidato 3: %d\n",votos[0],votos[1],votos[2]);
    return 0;
}
