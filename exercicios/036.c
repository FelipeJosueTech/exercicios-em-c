/* Enunciado: leia uma data dd/mm/aaaa e determine se ela e valida. */
#include <stdio.h>
int main(void)      {
    int d,m,a,limite;
    char separador1,separador2;
    int valido=scanf("%d%c%d%c%d",&d,&separador1,&m,&separador2,&a)==5&&separador1=='/'&&separador2=='/'&&m>=1&&m<=12&&d>=1;
    if(m==2)
        limite=28+(a%4==0&&(a%100!=0||a%400==0));
    else
        limite=(m==4||m==6||m==9||m==11)?30:31;
    if(d>limite)
        valido=0;
    printf("%s\n",valido?"Data valida":"Data invalida");
    return 0;
}
