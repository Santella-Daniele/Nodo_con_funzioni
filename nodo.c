#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"



void stampa(Puntatore nodoAttuale){
        while (nodoAttuale != NULL) {
        printf("%d ---> ", nodoAttuale->val);
        nodoAttuale = nodoAttuale->next;
    }
        printf("NULL\n");

}

void nodoInCoda(Puntatore *testa, int valore){
    if (*testa == NULL){
        nodoInTesta(testa,valore);
    }else{
        
        Puntatore nodo = malloc(sizeof(Nodo));
        nodo->val = valore;
        nodo->next = NULL;
    
    Puntatore tmp = *testa;

   
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = nodo;
    }
}


void nodoInTesta(Puntatore *testa, int valore){
    Puntatore nodo =malloc(sizeof(Nodo));
    nodo->val = valore;
    nodo->next = *testa;
    
    *testa = nodo;
    
}


void inserisciDopo(Puntatore testa,int valore, int key){
       while (testa != NULL && testa->val != key) {
        testa = testa->next;
    }
    
     if (testa == NULL){
         
     }else{
    Puntatore nodo = malloc(sizeof(Nodo));
    nodo->val = valore;
    nodo->next = testa->next;

    testa->next = nodo;
     }
}
    

void pulisci(Puntatore *testa){

   Puntatore tmp;

    while (*testa != NULL) {
        tmp = *testa;    
        *testa = (*testa)->next;
        
        printf("Pulisci nodo con valore = %d\n", tmp->val);
        free(tmp);
    }
}





