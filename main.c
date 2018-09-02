#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
// Adicionando arquivo de funções auxiliares
#include "helpers.c"

int main(){

    char e[100];
    int p = 0;

    printf("Digite a entrada: ");
    gets(e);
    goto E0;

E0:
    if((e[p] >= 'a' && e[p] <= 'z') || (e[p] >= 'A' && e[p] <= 'Z'))
        exit(0);
    else
        if(e[p] >= 0 && e[p] <= 9)
            exit(0);
        else
E1:

E2:

S1:

S2:

S3:

S4:

S5:

S6:

SAIDA:

    system("pause");
    return 0;
}