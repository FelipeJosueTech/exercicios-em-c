// Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número].

#include <stdio.h>

int main() {
	int numero;
	printf("Informe um numero: ");
	scanf_s("%d", &numero);
	printf("O numero informado foi %d .", numero);
	return 0;
}