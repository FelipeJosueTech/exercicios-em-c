// Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

#include <stdio.h>

int main(){
	float pi = 3.14,
		raio = 0.0,
		area = 0.0;
		
	printf("Insira o raio do circulo: ");
	scanf("%f", &raio);
	
	area = pi * (raio*raio);
	
	printf("A area de um circulo de raio %.2f e: %.2f", raio, area);
	
	return 0;
}