// Enunciado: faca um Programa que calcule a area de um quadrado, em seguida
// mostre o dobro desta area para o usuario.

#include<stdio.h>

int main() {
	float lado = 0,
		area = 0,
		dobroArea = 0;
	
	printf("Insira o tamanho do lado do quadrado: ");
	scanf("%f", &lado);
	
	area = lado * lado;
	dobroArea = area * 2;
	
	printf("a area do quadrado de lado %.2f e igual a %.2f e seu dobro e igual a: %.2f", lado, area, dobroArea);
	return 0;
}