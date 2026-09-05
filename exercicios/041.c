/* Enunciado: leia dois numeros, realize a operacao escolhida e classifique o resultado. */
#include <stdio.h>
#include <math.h>
int main(void)      {
    double a,b,r;
    char op;
    scanf("%lf %lf %c",&a,&b,&op);
    if(op=='+')
        r=a+b;
    else if(op=='-')
        r=a-b;
    else if(op=='*')
        r=a*b;
    else if(op=='/'&&b!=0)
        r=a/b;
    else      {
        printf("Operacao invalida\n");
        return 0;
    }
    printf("Resultado: %.2f\n%s\n%s\n%s\n",r,fabs(r)<1e-9||fmod(r,2)!=0?"Impar":"Par",r>=0?"Positivo":"Negativo",r==floor(r)?"Inteiro":"Decimal");
    return 0;
}
