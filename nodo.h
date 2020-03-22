#ifndef NODO_H
#define NODO_H

struct nodo {
    int val;
    struct nodo *next;
};

typedef struct nodo Nodo;
typedef struct nodo *Puntatore;

void nodoInTesta(Puntatore *testa, int valore);
void nodoInCoda(Puntatore *testa, int valore);
void inserisciDopo(Puntatore testa,int valore, int key);
void pulisci(Puntatore *testa);
void stampa(Puntatore testa);


#endif