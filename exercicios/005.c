// Faça um Programa que converta metros para centímetros.

#include <stdio.h>

int main() {
	float metros, centimetros;
	printf("Insira o tamanho em metros: ");
	scanf("%f", &metros);
	centimetros = metros * 100;
	printf("%.0f metros e igual a %.0f centimetros", metros, centimetros);
	return 0;
}