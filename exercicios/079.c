/* Enunciado: calcule o salario atual de funcionario contratado em 1995 com aumento inicial de 1,5% e dobro anual. */
#include <stdio.h>
int main(void)      {
    double salario=1000,percentual=.015;
    int ano;
    scanf("%d",&ano);
    for(int a=1996;a<=ano;a++)      {
        salario*=1+percentual;
        if(a>=1997)
            percentual*=2;
    }
    printf("Salario: R$ %.2f\n",salario);
    return 0;
}
