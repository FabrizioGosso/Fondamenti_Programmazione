#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "game_functions.h"

// Lista di parole
char words[][20] = {"elephant", "banana", "computer", "galaxy", "puzzle", "giraffe"};

// Seleziona casualmente una parola
void select_random_word(char *word) {
    srand(time(NULL));
    int index = rand() % (sizeof(words) / sizeof(words[0]));
    strcpy(word, words[index]);
}

// Controlla la presenza della lettera nella parola e aggiorna la parola nascosta
int check_letter(char letter, const char *word, char *hidden_word) {
    int found = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == letter) {
            hidden_word[i] = letter;
            found = 1;
        }
    }
    return found;
}

// Stampa la parola con gli * per le lettere non indovinate
void print_word(const char *word) {
    printf("Parola attuale: %s\n", word);
}
