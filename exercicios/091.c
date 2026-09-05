/* Enunciado: calcule H=1+1/2+1/3+...+1/N. */
#include <stdio.h>
int main(void)      {
    int n;
    double h=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        h+=1.0/i;
    printf("H = %.6f\n",h);
    return 0;
}
