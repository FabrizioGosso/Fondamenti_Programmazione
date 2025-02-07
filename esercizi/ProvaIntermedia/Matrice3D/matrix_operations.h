#ifndef MATRIX_OPERATIONS_H
#define MATRIX_OPERATIONS_H

#include <stdbool.h>

#define ROWS 3
#define COLS 3
#define DEPTH 2

void print_matrix(int matrix[DEPTH][ROWS][COLS]);
void replace_even_odd(int matrix[DEPTH][ROWS][COLS]);
bool is_perfect_sudoku(int matrix[ROWS][COLS]);
void input_matrix(int matrix[DEPTH][ROWS][COLS]);

#endif
