/* Enunciado: calcule o cupom de uma compra de carne, com preco por faixa e desconto no cartao Tabajara. */
#include <stdio.h>
int main(void)      {
    int tipo,cartao;
    double kg,preco,total,desconto;
    scanf("%d %lf %d",&tipo,&kg,&cartao);
    if(tipo<1||tipo>3)      {
        printf("Tipo invalido\n");
        return 0;
    }
    preco=(tipo==1?(kg<=5?4.9:5.8):tipo==2?(kg<=5?5.9:6.8):(kg<=5?6.9:7.8));
    total=kg*preco;
    desconto=cartao?total*.05:0;
    printf("Tipo: %d\nQuantidade: %.2f kg\nPreco total: R$ %.2f\nDesconto: R$ %.2f\nValor a pagar: R$ %.2f\n",tipo,kg,total,desconto,total-desconto);
    return 0;
}
