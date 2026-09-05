/* Enunciado: calcule a media de duas notas, atribua conceito A-E e informe aprovado ou reprovado. */
#include <stdio.h>
int main(void)      {
    double n1,n2,m;
    char c;
    scanf("%lf %lf",&n1,&n2);
    m=(n1+n2)/2;
    if(m>=9)
        c='A';
    else if(m>=7.5)
        c='B';
    else if(m>=6)
        c='C';
    else if(m>=4)
        c='D';
    else
        c='E';
    printf("Notas: %.2f %.2f\nMedia: %.2f\nConceito: %c\n%s\n",n1,n2,m,c,c<='C'?"APROVADO":"REPROVADO");
    return 0;
}
