/* Enunciado: imprima os numeros de 1 a 20, primeiro em linhas e depois em uma linha. */
#include <stdio.h>
int main(void)      {
    for(int i=1;i<=20;i++)
        printf("%d\n",i);
    for(int i=1;i<=20;i++)
        printf("%d%s",i,i==20?"\n":" ");
    return 0;
}
