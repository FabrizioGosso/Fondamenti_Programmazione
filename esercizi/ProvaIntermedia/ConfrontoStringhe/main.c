#include <stdio.h>
#include "functions.h"

int main() {
    char words[][20] = {"elephant", "42trees", "Anna", "oasis", "civic", "mango", "Galaxy"};
    int size = sizeof(words) / sizeof(words[0]);

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