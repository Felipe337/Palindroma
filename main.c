#include <stdio.h>
#include <ctype.h>
#include "fila.h"
#include "pilha.h"

int main(void){
    char s[256];
    Fila F = fila(256);
    Pilha P = pilha(256);
    printf("\nFrase ? ");
    fgets(s, sizeof(s), stdin);
    for(int i=0; s[i]; i++)
        if( isalpha(s[i])){
            enfileira(s[i],F);
            empilha(s[i],P);
        }
    while( !vazia(F) && desenfileira(F)==desempilha(P));
    if( vazia(F)) puts("A frase e palindroma");
    else puts("A frase nao e palindroma");
    destroif(&F);
    destroip(&P);
    return 0;
}
