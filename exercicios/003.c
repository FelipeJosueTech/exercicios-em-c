// Faça um Programa que peça dois números e imprima a soma.

#include <stdio.h>

int main() {
	float numeroUm, numeroDois, result;
	printf("Insira dois numeros: ");
	scanf("%f %f", &numeroUm, &numeroDois);
	result = numeroUm + numeroDois;
	printf("A soma de %.2f e %.2f e: %.2f", numeroUm, numeroDois, result);
	return 0;
}