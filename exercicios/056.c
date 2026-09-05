/* Enunciado: mostre os numeros do intervalo entre dois inteiros e a soma deles. */
#include <stdio.h>
int main(void)      {
    int a,b,passo,soma=0;
    scanf("%d %d",&a,&b);
    passo=a<=b?1:-1;
    for(int i=a;;i+=passo)      {
        printf("%d%s",i,i==b?"\n":" ");
        soma+=i;
        if(i==b)
            break;
    }
    printf("Soma: %d\n",soma);
    return 0;
}
