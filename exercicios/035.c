/* Enunciado: leia um ano e informe se ele e bissexto. */
#include <stdio.h>
int main(void)      {
    int ano;
    scanf("%d",&ano);
    printf("%s\n",(ano%400==0||(ano%4==0&&ano%100!=0))?"Bissexto":"Nao bissexto");
    return 0;
}
