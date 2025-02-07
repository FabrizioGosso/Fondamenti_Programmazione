#include <stdio.h>
#include "matrix_operations.h"

int main() {
    int matrix[DEPTH][ROWS][COLS];
    int scelta;

    printf("Vuoi usare la matrice predefinita (1) o inserirne una personalizzata (2)? ");
    scanf("%d", &scelta);

    if (scelta == 1) {
        // Inizializzazione della matrice predefinita
        int default_matrix[DEPTH][ROWS][COLS] = {
            {
                {1,  4,  7},
                {2,  5,  8},
                {3,  6,  9}
            },
            {
                {1,  4,  7},
                {2,  5,  8},
                {3,  5,  9}  // Il numero 5 è ripetuto volutamente
            }
        };
        // Copia la matrice predefinita in `matrix`
        for (int k = 0; k < DEPTH; k++) {
            for (int i = 0; i < ROWS; i++) {
                for (int j = 0; j < COLS; j++) {
                    matrix[k][i][j] = default_matrix[k][i][j];
                }
            }
        }
    } else {
        // Permetti all'utente di inserire i valori manualmente
        input_matrix(matrix);
    }

    // Stampa della matrice originale
    printf("Matrice originale:\n");
    print_matrix(matrix);

    // Verifica Sudoku perfetto per ogni blocco 3x3
    for (int k = 0; k < DEPTH; k++) {
        if (is_perfect_sudoku(matrix[k])) {
            printf("La matrice %d è un Sudoku perfetto.\n\n", k + 1);
        } else {
            printf("La matrice %d non è un Sudoku perfetto.\n\n", k + 1);
        }
    }

    // Sostituzione degli elementi pari/dispari
    replace_even_odd(matrix);

    // Stampa della matrice modificata
    printf("Dopo sostituzione pari/dispari:\n");
    print_matrix(matrix);

    

    printf("\n");

    return 0;
}
