#include <stdio.h>

int main() {
    int N;

    // Richiedi un numero intero positivo dall'utente
    do {
        printf("Inserisci un numero intero positivo: ");
        scanf("%d", &N);

        if (N <= 0) {
            printf("Il numero deve essere positivo. Riprova.\n");
        }
    } while (N <= 0);

    // Stampa il triangolo di numeri con un solo ciclo for
    for (int i = 1, num = 1; i <= N; i++, num = 1) {
        while (num <= i) {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
