/* Enunciado: leia quatro notas, mostre as notas e a media. */
#include <stdio.h>
int main(void)      {
    double n[4],s=0;
    for(int i=0;i<4;i++)      {
        scanf("%lf",&n[i]);
        s+=n[i];
    }
    for(int i=0;i<4;i++)
        printf("%.2f ",n[i]);
    printf("\nMedia: %.2f\n",s/4);
    return 0;
}
