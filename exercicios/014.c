/* João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho.

Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente.

João precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule o excesso.

Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que João deverá pagar. Imprima os dados do programa com as mensagens adequadas. */

#include <stdio.h>

float calcularExcesso(float pesoDePeixes) {
	float excesso = 0.0f;
	if (pesoDePeixes > 50.0f) {
		excesso = pesoDePeixes - 50.0f;
		return excesso;
	} else {
		return excesso;
	}
}

float calcularMulta(float excesso) {
	return excesso * 4.00f;
}

int main() {
	float pesoDePeixes, excesso, multa;
	
	printf("Informe o peso dos peixes pescados em kg: ");
	scanf("%f", &pesoDePeixes);
	
	excesso = calcularExcesso(pesoDePeixes);
	multa = calcularMulta(excesso);
	
	printf("Segue informacoes processadas:\n\nPeso de Pexes: %.2fKg\nExcesso: %.2fKg\nMulta: R$%.2f", pesoDePeixes, excesso, multa);
	
	return 0;
}