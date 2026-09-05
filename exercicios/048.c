/* Enunciado: valide nome, idade, salario, sexo e estado civil conforme os intervalos pedidos. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)      {
    char nome[100],sexo,estado;
    int idade;
    double salario;
    do      {
        scanf(" %99[^\n]",nome);
    }
    while(strlen(nome)<=3)
        ;
    do
        scanf("%d",&idade);
    while(idade<0||idade>150)
        ;
    do
        scanf("%lf",&salario);
    while(salario<=0)
        ;
    do
        scanf(" %c",&sexo);
    while(tolower((unsigned char)sexo)!='f'&&tolower((unsigned char)sexo)!='m')
        ;
    do
        scanf(" %c",&estado);
    while(!strchr("scvd",tolower((unsigned char)estado)))
        ;
    printf("Dados validos: %s %d %.2f %c %c\n",nome,idade,salario,sexo,estado);
    return 0;
}
