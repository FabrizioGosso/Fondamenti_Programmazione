#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Funzione per controllare se una stringa è palindroma
int isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0; // Non è palindroma
        }
    }
    return 1; // È palindroma
}

// Funzione per controllare se una stringa contiene almeno un numero
int hasNumber(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            return 1;
        }
    }
    return 0;
}

// Funzione per controllare se una stringa contiene almeno una vocale
int hasVowel(char str[]) {
    char vowels[] = "aeiouAEIOU";
    for (int i = 0; str[i] != '\0'; i++) {
        if (strchr(vowels, str[i]) != NULL) {
            return 1;
        }
    }
    return 0;
}

int main() {
    // Definizione e inizializzazione dell'array di stringhe
    char *array[6] = { "apple", "banana", "123hello", "Aardvark", "racecar", "world" };

    int countStartsWithA = 0;
    int countWithNumber = 0;
    int countPalindromes = 0;
    int allMoreThanFive = 1;
    int allHaveVowel = 1;

    char *longest = array[0];
    char *shortest = array[0];

    for (int i = 0; i < 6; i++) {
        char *str = array[i];

        // Controllo se inizia con 'A' o 'a'
        if (str[0] == 'A' || str[0] == 'a') {
            countStartsWithA++;
        }

        // Controllo se contiene almeno un numero
        if (hasNumber(str)) {
            countWithNumber++;
        }

        // Controllo se è palindroma
        if (isPalindrome(str)) {
            countPalindromes++;
        }

        // Trova la stringa più lunga e più corta
        if (strlen(str) > strlen(longest)) {
            longest = str;
        }
        if (strlen(str) < strlen(shortest)) {
            shortest = str;
        }

        // Controllo se tutte le stringhe sono più lunghe di 5 caratteri
        if (strlen(str) <= 5) {
            allMoreThanFive = 0;
        }

        // Controllo se tutte le stringhe contengono almeno una vocale
        if (!hasVowel(str)) {
            allHaveVowel = 0;
        }
    }

    // Stampa dei risultati
    printf("Numero di stringhe che iniziano con 'A' o 'a': %d\n", countStartsWithA);
    printf("Numero di stringhe che contengono almeno un numero: %d\n", countWithNumber);
    printf("Stringa più lunga: %s\n", longest);
    printf("Stringa più corta: %s\n", shortest);
    printf("Numero di stringhe palindrome: %d\n", countPalindromes);

    if (allMoreThanFive) {
        printf("Tutte le stringhe sono lunghe più di 5 caratteri.\n");
    }

    if (allHaveVowel) {
        printf("Tutte le stringhe contengono almeno una vocale.\n\n");
    }

    return 0;
}
