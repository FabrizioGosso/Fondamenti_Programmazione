#include <stdio.h>
#include "operazioni.h"

int main(){

    int n1, n2;
    // Messaggio e input dati
    printf("Benvenuto, %s %s!\n", NOME, COGNOME);

    // Input dati
    printf("Inserisci il primo numero intero: \n");
    scanf("%d", &n1);
    printf("Inserisci il secondo numero intero: \n");
    scanf("%d", &n2);

    // Stampa risultati operazioni
    printf("\nSomma: %d + %d = %d\n", n1, n2, SOMMA(n1, n2));
    printf("Sottrazione: %d - %d = %d\n", n1, n2, SOTTRAZIONE(n1, n2));
    printf("Moltiplicazione: %d * %d = %d\n", n1, n2, MOLTIPLICAZIONE(n1, n2));
    printf("Divisione: %d / %d = %.2f\n", n1, n2, DIVISIONE((double)n1, (double)n2)); // Castato a double per dare risultati con la virgola
    printf("Modulo: %d %% %d = %d\n", n1, n2, MODULO(n1, n2));

    double calcolo_complesso = DIVISIONE(SOTTRAZIONE(MOLTIPLICAZIONE(SOMMA(n1, n2), n1), n2), n1);
    printf("Calcolo complesso: (((%d + %d) * %d) - %d) / %d = %.2f\n", 
           n1, n2, n1, n2, n1, calcolo_complesso);

    printf("Grazie per aver usato il nostro programma.\n\n");

    return 0;

}