/* Enunciado: aplique o reajuste salarial conforme a faixa e mostre salario anterior, percentual, aumento e novo salario. */
#include <stdio.h>
int main(void)       {
    double salario,percentual,aumento;
    scanf("%lf",&salario);
    if(salario<=280)
        percentual=.20;
    else if(salario<=700)
        percentual=.15;
    else if(salario<=1500)
        percentual=.10;
    else
        percentual=.05;
    aumento=salario*percentual;
    printf("Salario antes: R$ %.2f\nPercentual: %.0f%%\nAumento: R$ %.2f\nNovo salario: R$ %.2f\n",salario,percentual*100,aumento,salario+aumento);
    return 0;
}
