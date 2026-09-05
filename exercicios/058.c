/* Enunciado: calcule base elevada a expoente sem usar funcao de potencia. */
#include <stdio.h>
int main(void)      {
    double base,resultado=1;
    int expoente;
    scanf("%lf %d",&base,&expoente);
    if(expoente<0)      {
        printf("Expoente invalido\n");
        return 0;
    }
    for(int i=0;i<expoente;i++)
        resultado*=base;
    printf("Resultado: %.2f\n",resultado);
    return 0;
}
