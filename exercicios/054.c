/* Enunciado: imprima os numeros impares entre 1 e 50. */
#include <stdio.h>
int main(void)      {
    for(int i=1;i<=50;i+=2)
        printf("%d%s",i,i>=49?"\n":" ");
    return 0;
}
