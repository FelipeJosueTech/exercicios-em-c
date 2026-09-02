// Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre: o produto do dobro do primeiro com metade do segundo. a soma do triplo do primeiro com o terceiro. o terceiro elevado ao cubo.

#include <stdio.h>

float produto(int numeroIntUm, int numeroIntDois) {
    return (2.0f * numeroIntUm) * (numeroIntDois / 2.0f);
}

float soma(int numeroIntUm, float numeroReal) {
    return (3.0f * numeroIntUm) + numeroReal;
}

int main() {
    int numeroIntUm, numeroIntDois;
    float numeroReal, resultado;
    
    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &numeroIntUm);

    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &numeroIntDois);

    printf("Informe um numero real: ");
    scanf("%f", &numeroReal);

    resultado = produto(numeroIntUm, numeroIntDois);
    printf("O produto do dobro do primeiro com metade do segundo e: %.2f\n", resultado);

    resultado = soma(numeroIntUm, numeroReal);
    printf("A soma do triplo do primeiro com o terceiro e: %.2f\n", resultado);

    resultado = numeroReal * numeroReal * numeroReal;
    printf("O terceiro elevado ao cubo e: %.2f\n", resultado);

    return 0;
}