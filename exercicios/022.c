/* Enunciado: verifique se uma letra digitada e vogal ou consoante. */
#include <stdio.h>
#include <ctype.h>
int main(void)       {
    char letra;
    scanf(" %c", &letra);
    letra = (char)tolower((unsigned char)letra);
    if (letra < 'a' || letra > 'z')
        printf("Invalido\n");
    else if (letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u')
        printf("Vogal\n");
    else
        printf("Consoante\n");
    return 0;
}
