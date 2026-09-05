/* Enunciado: leia duas notas, calcule a media e informe aprovado, reprovado ou aprovado com distincao. */
#include <stdio.h>
int main(void)       {
    double a,b,media;
    scanf("%lf %lf",&a,&b);
    media=(a+b)/2;
    printf("Media: %.2f\n",media);
    if(media==10)
        printf("Aprovado com Distincao\n");
    else if(media>=7)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");
    return 0;
}
