/* Enunciado: receba dois inteiros e gere os numeros do intervalo entre eles. */
#include <stdio.h>
int main(void)      {
    int a,b,passo;
    scanf("%d %d",&a,&b);
    passo=a<=b?1:-1;
    for(int i=a;;i+=passo)      {
        printf("%d%s",i,i==b?"\n":" ");
        if(i==b)
            break;
    }
    return 0;
}
