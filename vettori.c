#include <stdio.h>

// Funzione che serve per stampare gli elementi del vettore
void stampaElementi(int vettore[], int indice, int lunghezza) {
    // se l'indice ha raggiunto la fine del vettore termina
    if (indice == lunghezza) {
        return;
    }

    // Stampo il valore 
    printf("%d ", vettore[indice]);

    // Chiamata che serve per stampare l'elemento successivo
    stampaElementi(vettore, indice + 1, lunghezza);
}

int main() {
    int vettore[] = {1, 2, 3, 4, 5, 6};
    int lunghezza = 6;  // Lunghezza vettore

    // Chiamata alla funzione per stampare gli elementi del vettore
    stampaElementi(vettore, 0, lunghezza);

    return 0;
}
