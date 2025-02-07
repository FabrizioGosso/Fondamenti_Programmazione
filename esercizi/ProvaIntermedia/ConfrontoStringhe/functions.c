#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"

// Controlla se un carattere è una vocale
int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Conta le stringhe che iniziano con una vocale
int countVowelStart(char words[][20], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (isVowel(words[i][0])) {
            count++;
        }
    }
    return count;
}

// Conta le stringhe che contengono almeno un numero
int countStringsWithNumbers(char words[][20], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; words[i][j] != '\0'; j++) {
            if (isdigit(words[i][j])) {
                count++;
                break;
            }
        }
    }
    return count;
}

// Trova la stringa più lunga e quella più corta
void findLongestAndShortest(char words[][20], int size, char *longest, char *shortest) {
    strcpy(longest, words[0]);
    strcpy(shortest, words[0]);

    for (int i = 1; i < size; i++) {
        if (strlen(words[i]) > strlen(longest)) {
            strcpy(longest, words[i]);
        }
        if (strlen(words[i]) < strlen(shortest)) {
            strcpy(shortest, words[i]);
        }
    }
}

// Controlla se una stringa è palindroma
int isPalindrome(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (tolower(str[i]) != tolower(str[len - 1 - i])) {
            return 0;
        }
    }
    return 1;
}

// Conta il numero di stringhe palindrome
int countPalindromes(char words[][20], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (isPalindrome(words[i])) {
            count++;
        }
    }
    return count;
}

// Conta il numero totale di caratteri
int totalCharacters(char words[][20], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += strlen(words[i]);
    }
    return total;
}

// Stampa l'array di stringhe in vari modi
void printArray(char words[][20], int size, int reverse, int reverseChars) {
    if (reverse) {
        for (int i = size - 1; i >= 0; i--) {
            if (reverseChars) {
                for (int j = strlen(words[i]) - 1; j >= 0; j--) {
                    putchar(words[i][j]);
                }
            } else {
                printf("%s", words[i]);
            }
            if (i > 0) {
                printf(", ");
            }
        }
    } else {
        for (int i = 0; i < size; i++) {
            printf("%s", words[i]);
            if (i < size - 1) {
                printf(", ");
            }
        }
    }
    printf("\n");
}