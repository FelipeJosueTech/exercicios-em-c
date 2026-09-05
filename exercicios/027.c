/* Enunciado: leia tres numeros e mostre-os em ordem decrescente. */
#include <stdio.h>
int main(void)       {
    double n[3],temp;
    scanf("%lf %lf %lf",&n[0],&n[1],&n[2]);
    for(int i=0;i<3;i++)for(int j=i+1;j<3;j++)if(n[j]>n[i])      {
        temp=n[i];
        n[i]=n[j];
        n[j]=temp;
    }
    printf("%.2f %.2f %.2f\n",n[0],n[1],n[2]);
    return 0;
}
