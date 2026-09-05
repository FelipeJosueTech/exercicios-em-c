/* Enunciado: conte positivos nos intervalos 0-25, 26-50, 51-75 e 76-100 ate numero negativo. */
#include <stdio.h>
int main(void)      {
    int n,cont[4]=      {
        0
    }
    ;
    while(scanf("%d",&n)==1&&n>=0)
        if(n<=25)cont[0]++;
    else if(n<=50)
        cont[1]++;
    else if(n<=75)
        cont[2]++;
    else if(n<=100)
        cont[3]++;
    printf("[0-25]: %d\n[26-50]: %d\n[51-75]: %d\n[76-100]: %d\n",cont[0],cont[1],cont[2],cont[3]);
    return 0;
}
