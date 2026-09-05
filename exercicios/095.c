/* Enunciado: leia dez caracteres, conte e imprima as consoantes. */
#include <stdio.h>
#include <ctype.h>
int main(void)      {
    char c;
    int total=0;
    for(int i=0;i<10;i++)      {
        scanf(" %c",&c);
        c=(char)tolower((unsigned char)c);
        if(c>='a'&&c<='z'&&c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u')      {
            printf("%c ",c);
            total++;
        }
    }
    printf("\nConsoantes: %d\n",total);
    return 0;
}
