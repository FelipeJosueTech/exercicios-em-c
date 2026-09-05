/* Enunciado: calcule quantas latas de 18 litros e galoes de 3,6 litros comprar para pintar uma area, com 10% de folga, nos modos lata, galao e mistura de menor preco. */
#include <stdio.h>
#include <math.h>
int main(void)       {
    double area, litros;
    int latas, galoes, latas_mistas, galoes_mistos;
    double preco_latas, preco_galoes, preco_misto;
    printf("Area em metros quadrados: ");
    scanf("%lf", &area);
    litros = area / 6.0 * 1.10;
    latas = (int)ceil(litros / 18.0);
    galoes = (int)ceil(litros / 3.6);
    latas_mistas = (int)(litros / 18.0);
    galoes_mistos = (int)ceil((litros - latas_mistas * 18.0) / 3.6);
    if (galoes_mistos == 5)       {
        latas_mistas++;
        galoes_mistos = 0;
    }
    preco_latas = latas * 80.0;
    preco_galoes = galoes * 25.0;
    preco_misto = latas_mistas * 80.0 + galoes_mistos * 25.0;
    printf("Apenas latas: %d, R$ %.2f\n", latas, preco_latas);
    printf("Apenas galoes: %d, R$ %.2f\n", galoes, preco_galoes);
    printf("Mistura: %d latas e %d galoes, R$ %.2f\n", latas_mistas, galoes_mistos, preco_misto);
    return 0;
}
