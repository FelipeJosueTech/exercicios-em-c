/* Enunciado: leia nome e sete notas, elimine melhor e pior e calcule a media restante. */
#include <stdio.h>
int main(void)      {
    char nome[100];
    double n,soma=0,maior=0,menor=0;
    scanf(" %99[^\n]",nome);
    for(int i=0;i<7;i++)      {
        scanf("%lf",&n);
        soma+=n;
        if(i==0||n>maior)
            maior=n;
        if(i==0||n<menor)
            menor=n;
    }
    printf("Atleta: %s\nMelhor nota: %.2f\nPior nota: %.2f\nMedia: %.2f\n",nome,maior,menor,(soma-maior-menor)/5);
    return 0;
}
