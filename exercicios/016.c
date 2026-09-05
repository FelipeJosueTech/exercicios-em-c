/* Enunciado:
	faca um programa para uma loja de tintas. Peca o tamanho da area a ser
	pintada em metros quadrados. A cobertura e de 1 litro para cada 3 metros
	quadrados; a tinta e vendida em latas de 18 litros por R$ 80,00. Informe a
	quantidade de latas e o preco total.
*/

#include <stdio.h>
#include <math.h>

int main() {
	float area, litros_necessarios, preco_total;
	int latas_necessarias;

	printf("Digite o tamanho da area a ser pintada em metros quadrados: ");
	scanf("%f", &area);

	litros_necessarios = area / 3.0f;
	latas_necessarias = (int)ceilf(litros_necessarios / 18.0f);
	preco_total = latas_necessarias * 80.0f;

	printf("Quantidade de latas de tinta a serem compradas: %d\n", latas_necessarias);
	printf("Preco total: R$ %.2f\n", preco_total);

	return 0;
}