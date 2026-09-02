// Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas: Para homens: (72.7h) - 58 Para mulheres: (62.1h) - 44.7

#include <stdio.h>

float calcularPesoIdealParaHomens(float altura) {
	return (72.7f * altura) - 58.0f;
}

float calcularPesoIdealParaMulheres(float altura) {
	return (62.1 * altura) - 44.7f;
}

int main() {
	float altura, pesoIdeal;
	printf("Informe sua altura em metros: ");
	scanf("%f", &altura);
	
	pesoIdeal = calcularPesoIdealParaHomens(altura);
	printf("Peso ideal para homens e : %.2f kg", pesoIdeal);
	
	pesoIdeal = calcularPesoIdealParaMulheres(altura);
	printf(" e o peso ideal para Mulheres e : %.2f kg", pesoIdeal);
	
	return 0;
}