#include "operations.h"
#include <stdio.h>

// Funzione di addizione
int add(int a, int b) {
    return a + b;
}

// Funzione di sottrazione
int sub(int a, int b) {
    return a - b;
}

// Funzione di moltiplicazione
int mul(int a, int b) {
    return a * b;
}

// Funzione di divisione con gestione della divisione per zero
float divi(int a, int b) {
    if (b == 0) {
        printf("Errore: divisione per zero!\n");
        return 0;
    }
    return (float)a / b;
}

// Funzione per il modulo con gestione del caso modulo per zero
int mod(int a, int b) {
    if (b == 0) {
        printf("Errore: modulo per zero!\n");
        return 0;
    }
    return a % b;
}

// Funzione per l'elevamento a potenza usando la moltiplicazione
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

// Funzione per testare tutte le operazioni su un array
void test_all_operations(int arr[], int size) {
    printf("\nTest delle operazioni sui numeri { ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("}\n");

    for (int i = 0; i < size - 1; i++) {
        printf("%d + %d = %d\n", arr[i], arr[i + 1], add(arr[i], arr[i + 1]));
        printf("%d - %d = %d\n", arr[i], arr[i + 1], sub(arr[i], arr[i + 1]));
        printf("%d * %d = %d\n", arr[i], arr[i + 1], mul(arr[i], arr[i + 1]));
        printf("%d / %d = %.2f\n", arr[i], arr[i + 1], divi(arr[i], arr[i + 1]));
        printf("%d %% %d = %d\n", arr[i], arr[i + 1], mod(arr[i], arr[i + 1]));
        printf("%d ^ %d = %d\n", arr[i], arr[i + 1], power(arr[i], arr[i + 1]));
        printf("\n");
    }
}
