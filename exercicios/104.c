/* Enunciado: leia temperaturas dos doze meses, calcule media anual e mostre as acima da media. */
#include <stdio.h>
int main(void)      {
    const char *meses[]=      {
        "Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"
    }
    ;
    double t[12],s=0;
    for(int i=0;i<12;i++)      {
        scanf("%lf",&t[i]);
        s+=t[i];
    }
    for(int i=0;i<12;i++)
        if(t[i]>s/12)printf("%s: %.2f\n",meses[i],t[i]);
    return 0;
}
