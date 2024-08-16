#include "pilha.h"
#include <stdlib.h>
#include <stdio.h>

Pilha pilha(int m) {
    Pilha P = malloc(sizeof(struct pilha));
    P->max = m;
    P->topo = -1;
    P->item = malloc(m * sizeof(Itemp));
    return P;
}

int vaziap(Pilha P) {
    return (P->topo == -1);
}

int cheiap(Pilha P) {
    return (P->topo == P->max - 1);
}

void empilha(Itemp x, Pilha P) {
    if (cheiap(P)) {
        puts("pilha cheia!"); abort();
    }
    P->item[++P->topo] = x;
}

Itemp desempilha(Pilha P) {
    if (vaziap(P)) {
        puts("pilha vazia!"); abort();
    }
    return P->item[P->topo--];
}

void destroip(Pilha *P) {
    free((*P)->item);
    free(*P);
    *P = NULL;
}
