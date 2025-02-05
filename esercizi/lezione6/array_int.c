/*
Chieda all'utente di inserire 10 numeri interi e li memorizzi in un array.
Calcoli e stampi:
    La somma di tutti i numeri positivi presenti nell’array.
    La somma di tutti i numeri negativi presenti nell’array.
    Il valore massimo e il valore minimo dell'array.    
    Il numero di elementi pari e il numero di elementi dispari presenti nell'array.
Stampi un messaggio se tutti i numeri inseriti sono positivi o tutti negativi.
Stampi un messaggio se almeno un numero è multiplo di 5.
*/

#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#include "define.h"

int main() {

    int numbers[SIZE];
    int sumPos = 0;
    int sumNeg = 0;
    int max = INT_MIN;
    int min = INT_MAX;
    int contPari = 0;
    int contDispari = 0;
    int contPos = 0;
    int contNeg = 0;
    bool multi5 = false;

    // lettura da tastiera dei numeri da memorizzare nell'array
    for (int i = 0; i < SIZE; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // stampa di tutti i numeri inseriti
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }

    // ciclo di analisi degli elementi inseriti
    for (int i = 0; i < SIZE; i++) {
        int n =  numbers[i];

        // numero positivo
        if (n > 0) {
            sumPos += n;
            contPos++;
        }
        // numero negativo
        else if (n < 0) {
            sumNeg += n;
            contNeg++;
        }

        // massimo
        if (max < n) {
            max = n;
        }

        // minimo
        if (min > n) {
            min = n;
        }

        // conteggio totale numeri dispati e pari
        ( (n % 2) ? contDispari++ : contPari++ );

        // determinazione numero multiplo di cinque
        if ((n % 5) == 0) {
            multi5 = true;
        }
    }

    // output dei risultati
    printf("\n=== RISULTATI ===\n");
    printf("Somma totale dei positivi: %d\n", sumPos);
    printf("Somma totale dei negativi: %d\n", sumNeg);
    printf("Massimo: %d\n", max);
    printf("Minimo: %d\n", min);
    printf("Numeri pari: %d\n", contPari);
    printf("Numeri dispari: %d\n", contDispari);
    if ( multi5 ) {
        printf("E' presente almeno un numero divisibile per 5\n");
    }
    else{
        printf("Non e' presente almeno un numero divisibile per 5\n");
    }

    if (contPos == SIZE) {
        printf("I numeri sono tutti positivi\n");
    }

    if (contNeg == SIZE) {
        printf("I numeri sono tutti negativi\n");
    }

    printf("\n");

    return 0;
}