// Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.

#include <stdio.h>

int main() {
	float farenheit, celsius;
	printf("Informe a temperatura em Celsius: ");
	scanf("%f", &celsius);
	
	farenheit = 1.8 * celsius + 32;
	
	printf("%.2f Celsius e igual a %.2f Farenheit", celsius, farenheit);
	return 0;
}