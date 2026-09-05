/* Enunciado: calcule folha de pagamento com IR por faixa, INSS de 10%, FGTS de 11% e salario liquido. */
#include <stdio.h>
int main(void)       {
    double hora,horas,bruto,ir,inss,fgts,aliquota;
    scanf("%lf %lf",&hora,&horas);
    bruto=hora*horas;
    if(bruto<=900)
        aliquota=0;
    else if(bruto<=1500)
        aliquota=.05;
    else if(bruto<=2500)
        aliquota=.10;
    else
        aliquota=.20;
    ir=bruto*aliquota;
    inss=bruto*.10;
    fgts=bruto*.11;
    printf("Salario Bruto: R$ %.2f\n(-) IR (%.0f%%): R$ %.2f\n(-) INSS (10%%): R$ %.2f\nFGTS (11%%): R$ %.2f\nTotal de descontos: R$ %.2f\nSalario Liquido: R$ %.2f\n",bruto,aliquota*100,ir,inss,fgts,ir+inss,bruto-ir-inss);
    return 0;
}
