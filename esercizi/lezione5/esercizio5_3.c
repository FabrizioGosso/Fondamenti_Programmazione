#include <stdio.h>

int main() {
    int numero, somma = 0, massimo = 0, lunghezza = 0;

    printf("Inserisci un numero (0 per terminare): ");

    while (1) {
        if (scanf("%d", &numero) != 1) {
            printf("Input non valido. Riprova.");
            while (getchar() != '\n'); // Pulisce il buffer di input
            continue;
        }

        if (numero == 0) {
            break;
        }

        if (numero > 0) {
            somma += numero;
            lunghezza++;
            if (numero > massimo) {
                massimo = numero;
            }
        } else {
            printf("Numeri negativi non sono ammessi. Riprova.");
        }
    }

    if (lunghezza == 0) {
        printf("Nessun numero valido inserito.");
    } else {
        printf("Somma totale: %d\n", somma);
        printf("Numero massimo: %d\n", massimo);
        printf("Lunghezza della sequenza: %d\n\n", lunghezza);
    }

    return 0;
}