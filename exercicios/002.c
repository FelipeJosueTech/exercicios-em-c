// Enunciado: faca um Programa que peca um numero e entao mostre a mensagem
// "O numero informado foi [numero]".

#include <stdio.h>

int main() {
	int numero;
	printf("Informe um numero: ");
	scanf("%d", &numero);
	printf("O numero informado foi %d .", numero);
	return 0;
}