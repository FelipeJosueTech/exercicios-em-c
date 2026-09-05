/* Enunciado: leia idade e altura de cinco pessoas e mostre os vetores na ordem inversa. */
#include <stdio.h>
int main(void)      {
    int idade[5];
    double altura[5];
    for(int i=0;i<5;i++)
        scanf("%d %lf",&idade[i],&altura[i]);
    for(int i=4;i>=0;i--)
        printf("Idade: %d Altura: %.2f\n",idade[i],altura[i]);
    return 0;
}
