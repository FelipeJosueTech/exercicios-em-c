/* Enunciado: leia idades, calcule a media e classifique a turma como jovem, adulta ou idosa. */
#include <stdio.h>
int main(void)      {
    int n,idade;
    double soma=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)      {
        scanf("%d",&idade);
        soma+=idade;
    }
    if(n)      {
        double m=soma/n;
        printf("Media: %.2f\n%s\n",m,m<=25?"Jovem":m<=60?"Adulta":"Idosa");
    }
    return 0;
}
