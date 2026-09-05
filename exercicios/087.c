/* Enunciado: leia nome e cinco saltos, elimine melhor e pior e calcule a media restante. */
#include <stdio.h>
int main(void)      {
    char nome[100];
    double salto[5],soma=0,maior=0,menor=0;
    scanf(" %99[^\n]",nome);
    for(int i=0;i<5;i++)      {
        scanf("%lf",&salto[i]);
        soma+=salto[i];
        if(i==0||salto[i]>maior)
            maior=salto[i];
        if(i==0||salto[i]<menor)
            menor=salto[i];
    }
    printf("Atleta: %s\nMelhor: %.2f\nPior: %.2f\nMedia: %.2f\n",nome,maior,menor,(soma-maior-menor)/3);
    return 0;
}
