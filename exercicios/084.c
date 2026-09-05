/* Enunciado: leia codigos e quantidades do cardapio, calcule valor por item e total ate encerramento. */
#include <stdio.h>
int main(void)      {
    int codigo,q;
    double precos[]=      {
        1.2,1.3,1.5,1.2,1.3,1.0
    }
    ,total=0;
    while(scanf("%d",&codigo)==1&&codigo)      {
        if(codigo<100||codigo>105)
            continue;
        scanf("%d",&q);
        printf("Item: R$ %.2f\n",precos[codigo-100]*q);
        total+=precos[codigo-100]*q;
    }
    printf("Total: R$ %.2f\n",total);
    return 0;
}
