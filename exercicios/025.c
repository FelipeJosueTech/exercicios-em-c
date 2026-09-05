/* Enunciado: leia tres numeros e mostre o maior e o menor deles. */
#include <stdio.h>
int main(void)       {
    double n[3],maior,menor;
    scanf("%lf %lf %lf",&n[0],&n[1],&n[2]);
    maior=menor=n[0];
    for(int i=1;i<3;i++)      {
        if(n[i]>maior)
            maior=n[i];
        if(n[i]<menor)
            menor=n[i];
    }
    printf("Maior: %.2f\nMenor: %.2f\n",maior,menor);
    return 0;
}
