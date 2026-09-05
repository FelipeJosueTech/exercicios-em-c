/* Enunciado: pecaa uma nota entre zero e dez e repita ate receber valor valido. */
#include <stdio.h>
int main(void)      {
    double nota;
    do      {
        scanf("%lf",&nota);
        if(nota<0||nota>10)
            printf("Valor invalido\n");
    }
    while(nota<0||nota>10)
        ;
    printf("Nota: %.2f\n",nota);
    return 0;
}
