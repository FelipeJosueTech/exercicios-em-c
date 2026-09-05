/* Enunciado: calcule o preco de alcool ou gasolina com o desconto por litro. */
#include <stdio.h>
#include <ctype.h>
int main(void)      {
    double litros,preco,desconto;
    char tipo;
    scanf("%lf %c",&litros,&tipo);
    tipo=(char)toupper((unsigned char)tipo);
    if(tipo=='A')      {
        preco=1.90;
        desconto=litros<=20?.03:.05;
    }
    else if(tipo=='G')      {
        preco=2.50;
        desconto=litros<=20?.04:.06;
    }
    else      {
        printf("Combustivel invalido\n");
        return 0;
    }
    printf("Valor a pagar: R$ %.2f\n",litros*preco*(1-desconto));
    return 0;
}
