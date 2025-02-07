#include <stdio.h>
#include <string.h>
#include "game_functions.h"

int main() {
    char word[20];  // Parola da indovinare
    char hidden_word[20];  // Versione nascosta
    int attempts = 0;
    char guess;

    select_random_word(word);
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
