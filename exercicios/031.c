/* Enunciado: leia um numero de 1 a 7 e mostre o dia correspondente da semana. */
#include <stdio.h>
int main(void)      {
    int d;
    scanf("%d",&d);
    const char *dias[]=      {
        "Domingo","Segunda","Terca","Quarta","Quinta","Sexta","Sabado"
    }
    ;
    if(d>=1&&d<=7)
        printf("%s\n",dias[d-1]);
    else
        printf("Valor invalido\n");
    return 0;
}
