#include <stdio.h>
#include "functions.h"

int main() {
    int choice;
    char (*words)[20];
    int size;

    // Chiedi all'utente se vuole usare l'array predefinito o inserire uno nuovo
    printf("Vuoi usare l'array predefinito o inserirne uno nuovo?\n");
    printf("1. Usare l'array predefinito\n");
    printf("2. Inserire un nuovo array\n");
    printf("Scegli (1 o 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Array predefinito
        char defaultWords[][20] = {"elephant", "42trees", "Anna", "oasis", "civic", "mango", "Galaxy"};
        size = sizeof(defaultWords) / sizeof(defaultWords[0]);
        words = defaultWords; // Usa l'array predefinito
    } else if (choice == 2) {
        // Chiedi all'utente quanti elementi vuole inserire
        printf("Quante stringhe vuoi inserire? ");
        scanf("%d", &size);

        // Creazione dinamica dell'array di stringhe
        words = malloc(size * sizeof(*words));

        // Controlla se la memoria è stata allocata correttamente
        if (words == NULL) {
            printf("Memoria insufficiente!\n");
            return 1;
        }

        // Chiedi all'utente di inserire le stringhe
        printf("Inserisci le %d stringhe:\n", size);
        for (int i = 0; i < size; i++) {
            printf("Stringa %d: ", i + 1);
            scanf("%s", words[i]);
        }
    } else {
        printf("Scelta non valida. Uscita...\n");
        return 1;
    }

    printf("Numero di stringhe che iniziano con una vocale: %d\n", countVowelStart(words, size));
    printf("Numero di stringhe con almeno un numero: %d\n", countStringsWithNumbers(words, size));

    char longest[20], shortest[20];
    findLongestAndShortest(words, size, longest, shortest);
    printf("Stringa più lunga: \"%s\"\n", longest);
    printf("Stringa più corta: \"%s\"\n", shortest);

    printf("Numero di stringhe palindrome: %d\n", countPalindromes(words, size));
    printf("Numero totale di caratteri: %d\n", totalCharacters(words, size));

    printf("Elenco delle stringhe in ordine corretto: ");
    printArray(words, size, 0, 0);

    printf("Elenco delle stringhe in ordine inverso: ");
    printArray(words, size, 1, 0);

    printf("Elenco delle stringhe in ordine inverso con caratteri invertiti: ");
    printArray(words, size, 1, 1);
    printf("\n");
    return 0;
}