/* Enunciado: verifique se a letra digitada e F, M ou invalida. */
#include <stdio.h>
#include <ctype.h>
int main(void)       {
    char sexo;
    scanf(" %c", &sexo);
    sexo = (char)toupper((unsigned char)sexo);
    if (sexo == 'F')
        printf("Feminino\n");
    else if (sexo == 'M')
        printf("Masculino\n");
    else
        printf("Sexo invalido\n");
    return 0;
}
