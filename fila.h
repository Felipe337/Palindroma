typedef char Itemf;

typedef struct fila {
    int max;
    int total;
    int inicio;
    int final;
    Itemf *item;
} *Fila;

Fila fila(int m);
int vazia(Fila F);
int cheia(Fila F);
void enfileira(Itemf x, Fila F);
Itemf desenfileira(Fila F);
void destroif(Fila *G);
