#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "fila.h"
#define avanca(i) (i = (i+1) % F->max)


Fila fila(int m) {
    Fila F = malloc(sizeof(struct fila));
    F->max = m;
    F->total = 0;
    F->inicio = 0;
    F->final = 0;
    F->item = malloc (m*sizeof(Itemf));
    return F;
}

int vazia(Fila F){
    return (F->total == 0);
}

int cheia(Fila F) {
    return (F->total == F->max);
}

void enfileira(Itemf x, Fila F){
    if(cheia(F)) { puts("fila cheia!"); abort();}
    F->item[F->final] = x;
    avanca(F->final);
    F->total++;
}

Itemf desenfileira(Fila F) {
    if(vazia(F)) { puts("fila vazia!"); abort(); }
    Itemf x = F->item[F->inicio];
    F->inicio = (F->inicio + 1) % F->max;
    F->total--;
    return x;
}


void destroif(Fila *G){
    free((*G)->item);
    free(*G);
    *G = NULL;
}
