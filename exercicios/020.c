/* Enunciado: leia um valor e informe se ele e positivo ou negativo. */
#include <stdio.h>
int main(void)       {
    double valor;
    scanf("%lf", &valor);
    if (valor > 0)
        printf("Positivo\n");
    else if (valor < 0)
        printf("Negativo\n");
    else
        printf("Nulo\n");
    return 0;
}
