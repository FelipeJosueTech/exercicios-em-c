// Faça um Programa que peça as 4 notas bimestrais e mostre a média.

#include <stdio.h>

int main() {
	float notaUm, notaDois, notaTres, notaQuatro, media;
	printf("Insira as notas bimestrais: ");
	scanf("%f %f %f %f", &notaUm, &notaDois, &notaTres, &notaQuatro);
	media = (notaUm + notaDois + notaTres + notaQuatro) / 4;
	printf("A media das notas inseridas e: %.2f", media);
	return 0;
}