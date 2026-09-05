/* Enunciado: leia dez alunos e suas alturas e mostre o mais alto e o mais baixo. */
#include <stdio.h>
int main(void)      {
    int numero,alto=0,baixo=0;
    double altura,maior=0,menor=0;
    for(int i=0;i<10;i++)      {
        scanf("%d %lf",&numero,&altura);
        if(i==0||altura>maior)      {
            maior=altura;
            alto=numero;
        }
        if(i==0||altura<menor)      {
            menor=altura;
            baixo=numero;
        }
    }
    printf("Mais alto: %d %.2f\nMais baixo: %d %.2f\n",alto,maior,baixo,menor);
    return 0;
}
