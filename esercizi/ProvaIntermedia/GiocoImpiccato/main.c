#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "game_functions.h"

int main() {
    char word[20];  // Parola da indovinare
    char hidden_word[20];  // Versione nascosta
    int attempts = 0;
    char guess;
    int choice;

    printf("Scegli se usare l'array predefinito (1) o inserire le tue parole (2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Usa l'array predefinito
        select_random_word(word);
    } else if (choice == 2) {
        // L'utente inserisce manualmente una parola
        int n;
        printf("Quante parole vuoi aggiungere? ");
        scanf("%d", &n);
        char custom_words[n][20];

        printf("Inserisci le tue parole (una per volta):\n");
        for (int i = 0; i < n; i++) {
            printf("Parola %d: ", i + 1);
            scanf("%s", custom_words[i]);
        }

        // Scegli una parola casuale dalla lista personalizzata
        srand(time(NULL));
        int index = rand() % n;
        strcpy(word, custom_words[index]);
    } else {
        printf("Scelta non valida! Uscendo...\n");
        return 1;
    }

    int word_length = strlen(word);

    // Inizializza la parola nascosta con '*'
    for (int i = 0; i < word_length; i++) {
        hidden_word[i] = '*';
    }
    hidden_word[word_length] = '\0';

    printf("La parola da indovinare: %s\n", hidden_word);

    while (strcmp(hidden_word, word) != 0) {
        printf("\nInserisci un carattere: ");
        scanf(" %c", &guess);  // Spazio prima di %c per ignorare spazi bianchi

        attempts++;

        if (check_letter(guess, word, hidden_word)) {
            printf("Lettera presente!\n");
        } else {
            printf("Lettera assente.\n");
        }

        print_word(hidden_word);
    }

    printf("\nComplimenti! Hai indovinato la parola \"%s\" in %d tentativi!\n", word, attempts);
    printf("\n");

    return 0;
}
