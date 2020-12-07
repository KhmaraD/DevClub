#include <stdio.h>

#define SIZE 3

void matrixScan(FILE *in, int matrix[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < size; col++ ) {
            fscanf(in, "%d", &matrix[col][row]);
        }
    }
}

void matrixPrint(int matrix[SIZE][SIZE], int size) {
    int limit = size - 1;
    
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < limit; col++ ) {
            printf("%d ", matrix[row][col]);
        }
        printf("%d\n", matrix[row][limit]);
    }
}

int main () {
    int matrix[SIZE][SIZE];
    FILE *in = fopen("task.in", "r");
    
    matrixScan(in, matrix, SIZE);
    fclose(in);
    
    matrixPrint(matrix, SIZE);
    
    return 0;
}


// epic win
// void matrixScan(FILE *in, int matrix[SIZE][SIZE], int size);
// Столбец – первый индекс, строка – второй.