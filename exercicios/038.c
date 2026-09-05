/* Enunciado: informe as notas de 1, 5, 10, 50 e 100 para um saque entre 10 e 600 reais. */
#include <stdio.h>
int main(void)      {
    int saque,notas[]=      {
        100,50,10,5,1
    }
    ;
    scanf("%d",&saque);
    if(saque<10||saque>600)      {
        printf("Valor invalido\n");
        return 0;
    }
    for(int i=0;i<5;i++)      {
        printf("Notas de %d: %d\n",notas[i],saque/notas[i]);
        saque%=notas[i];
    }
    return 0;
}
