/* Enunciado: leia o tamanho de um arquivo em MB e a velocidade do link em Mbps e calcule o tempo de download em minutos. */
#include <stdio.h>
int main(void)       {
    double tamanho_mb, velocidade_mbps;
    printf("Tamanho do arquivo (MB): ");
    scanf("%lf", &tamanho_mb);
    printf("Velocidade do link (Mbps): ");
    scanf("%lf", &velocidade_mbps);
    printf("Tempo aproximado: %.2f minutos\n", tamanho_mb * 8.0 / velocidade_mbps / 60.0);
    return 0;
}
