/* Enunciado: leia o turno M, V ou N e mostre a saudacao correspondente. */
#include <stdio.h>
#include <ctype.h>
int main(void)       {
    char turno;
    scanf(" %c",&turno);
    turno=(char)toupper((unsigned char)turno);
    if(turno=='M')
        printf("Bom Dia!\n");
    else if(turno=='V')
        printf("Boa Tarde!\n");
    else if(turno=='N')
        printf("Boa Noite!\n");
    else
        printf("Valor Invalido!\n");
    return 0;
}
