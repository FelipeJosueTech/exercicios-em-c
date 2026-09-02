// Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58

#include <stdio.h>

float calcularPesoIdeal(float altura) {
    return (72.7f * altura) - 58.0f;
}

int main() {
    float altura, pesoIdeal;

    printf("Informe a altura da pessoa em metros: ");
    scanf("%f", &altura);

    pesoIdeal = calcularPesoIdeal(altura);
    printf("O peso ideal para a altura %.2f m e: %.2f kg\n", altura, pesoIdeal);

    return 0;
}
