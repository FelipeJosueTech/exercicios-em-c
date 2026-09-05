/* Enunciado: leia cinco numeros e informe o maior numero. */
#include <stdio.h>
int main(void)      {
    double n,maior;
    scanf("%lf",&maior);
    for(int i=1;i<5;i++)      {
        scanf("%lf",&n);
        if(n>maior)
            maior=n;
    }
    printf("Maior: %.2f\n",maior);
    return 0;
}
