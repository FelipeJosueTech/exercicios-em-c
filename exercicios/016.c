/*
Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.

Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00.

Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.
*/

float calcula_quantidade_tinta(float area) {
	return area / 3;
}

calcula_quantidade_lata(float quantidade_tinta) {
	return 
}

float calcula_valor(float quantidade_lata) {
	
}

#include <stdio.h>

int main() {
	float area_pintada;
	int quantidade_lata = 1;
	float quantidade_tinta;
	
	printf("Insira o tamanho em metros quadrados da area a ser pintada: ");
	scanf("%f", &area_pintada);
	quantidade = calcula_quantidade(area_pintada);
	
	printf("A quantidade de tinta necessária é: %.2f", quantidade);
	
	return 0;
}