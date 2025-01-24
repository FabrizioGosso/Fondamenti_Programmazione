#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_segreto, tentativo, tentativi = 0;

    // Inizializza il generatore di numeri casuali
    srand(time(NULL));
    numero_segreto = rand() % 100 + 1; // Numero casuale tra 1 e 100

    printf("Indovina il numero segreto (tra 1 e 100):\n");

    do {
        printf("Inserisci un numero: ");
        if (scanf("%d", &tentativo) != 1 || tentativo <= 0) {
            printf("Per favore, inserisci solo numeri interi positivi.\n");
            while (getchar() != '\n'); // Pulisce il buffer di input
            continue;
        }

        tentativi++;

        if (tentativo < numero_segreto) {
            printf("Troppo basso! Riprova.\n");
        } else if (tentativo > numero_segreto) {
            printf("Troppo alto! Riprova.\n");
        } else {
            printf("Complimenti! Hai indovinato il numero in %d tentativi.\n\n", tentativi);
        }
    } while (tentativo != numero_segreto);

    return 0;
}
