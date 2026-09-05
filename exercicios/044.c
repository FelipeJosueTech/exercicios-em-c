/* Enunciado: calcule o valor de morangos e macas, aplicando 10% de desconto quando cabivel. */
#include <stdio.h>
int main(void)      {
    double morango,maca,total,kg;
    scanf("%lf %lf",&morango,&maca);
    total=morango*(morango<=5?2.5:2.2)+maca*(maca<=5?1.8:1.5);
    kg=morango+maca;
    if(kg>8||total>25)
        total*=.9;
    printf("Valor a pagar: R$ %.2f\n",total);
    return 0;
}
