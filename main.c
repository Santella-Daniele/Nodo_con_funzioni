#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

    int main(){
        
        Puntatore testa = NULL;
        stampa(testa);
        
        nodoInCoda(&testa,2);
        stampa(testa);
        
        inserisciDopo(testa,6,2);
        stampa(testa);
        
        nodoInTesta(&testa,9);
        stampa(testa);
        
        inserisciDopo(testa, 8,6);
        stampa(testa);
        
        nodoInCoda(&testa,10);
        stampa(testa);
        
        pulisci(&testa);
        
        return 0;
    }