/* Enunciado: leia salarios ate zero, calcule abono de 20% com minimo de R$100 e mostre estatisticas. */
#include <stdio.h>
int main(void)      {
    double salario,abono,total=0,maior=0;
    int n=0,minimos=0;
    while(scanf("%lf",&salario)==1&&salario>0)      {
        abono=salario*.2;
        if(abono<100)      {
            abono=100;
            minimos++;
        }
        printf("Salario: R$ %.2f - Abono: R$ %.2f\n",salario,abono);
        total+=abono;
        if(abono>maior)
            maior=abono;
        n++;
    }
    printf("Funcionarios: %d\nTotal: R$ %.2f\nMinimos: %d\nMaior abono: R$ %.2f\n",n,total,minimos,maior);
    return 0;
}
