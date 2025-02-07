#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int countVowelStart(char words[][20], int size);
int countStringsWithNumbers(char words[][20], int size);
void findLongestAndShortest(char words[][20], int size, char *longest, char *shortest);
int countPalindromes(char words[][20], int size);
int totalCharacters(char words[][20], int size);
void printArray(char words[][20], int size, int reverse, int reverseChars);

#endif