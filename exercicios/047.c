/* Enunciado: leia usuario e senha e nao aceite senha igual ao nome do usuario. */
#include <stdio.h>
#include <string.h>
int main(void)      {
    char usuario[100],senha[100];
    do      {
        scanf("%99s %99s",usuario,senha);
        if(strcmp(usuario,senha)==0)
            printf("Senha invalida\n");
    }
    while(strcmp(usuario,senha)==0)
        ;
    printf("Cadastro aceito\n");
    return 0;
}
