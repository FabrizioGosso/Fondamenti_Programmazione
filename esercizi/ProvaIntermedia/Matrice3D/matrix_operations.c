#include <stdio.h>
#include <stdbool.h>
#include "matrix_operations.h"

// Funzione per stampare la matrice tridimensionale
void print_matrix(int matrix[DEPTH][ROWS][COLS]) {
    for (int k = 0; k < DEPTH; k++) {
        printf("Matrice %d:\n", k + 1);
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                printf("%d\t", matrix[k][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

// Funzione per sostituire i numeri pari con -1 e i dispari con 1
void replace_even_odd(int matrix[DEPTH][ROWS][COLS]) {
    for (int k = 0; k < DEPTH; k++) {
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                if (matrix[k][i][j] % 2 == 0) {
                    matrix[k][i][j] = -1;
                } else {
                    matrix[k][i][j] = 1;
                }
            }
        }
    }
}

// Funzione per verificare se una matrice 3x3 è un Sudoku perfetto
bool is_perfect_sudoku(int matrix[ROWS][COLS]) {
    bool numbers[10] = {false};  // Indici da 1 a 9 (numbers[0] non usato)

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            int num = matrix[i][j];

            if (num < 1 || num > 9) {
                return false;  // Numero fuori intervallo
            }
            if (numbers[num]) {
                return false;  // Numero già visto
            }
            numbers[num] = true;
        }
    }
    return true;
}

// Funzione per permettere all'utente di inserire i valori della matrice
void input_matrix(int matrix[DEPTH][ROWS][COLS]) {
    for (int k = 0; k < DEPTH; k++) {
        printf("Inserisci i valori per la matrice %d (3x3):\n", k + 1);
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                printf("Elemento [%d][%d][%d]: ", k, i, j);
                scanf("%d", &matrix[k][i][j]);
            }
        }
        printf("\n");
    }
}
