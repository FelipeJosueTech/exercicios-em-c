/* Enunciado: conte respostas positivas a cinco perguntas e classifique a participacao no crime. */
#include <stdio.h>
int main(void)      {
    int sim=0,resposta;
    for(int i=0;i<5;i++)      {
        scanf("%d",&resposta);
        if(resposta)
            sim++;
    }
    if(sim==2)
        printf("Suspeita\n");
    else if(sim==3||sim==4)
        printf("Cumplice\n");
    else if(sim==5)
        printf("Assassino\n");
    else
        printf("Inocente\n");
    return 0;
}
