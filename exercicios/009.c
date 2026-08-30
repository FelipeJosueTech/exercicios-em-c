// Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9).

#include <stdio.h>

int main() {
	float farenheit, celsius;
	printf("Informe a temperatura em Farenheit: ");
	scanf("%f", &farenheit);
	
	celsius = (5 * (farenheit-32) / 9);
	
	printf("%.2f Farenheits e igual a %.2f celsius", farenheit, celsius);
	return 0;
}