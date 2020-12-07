#include <stdio.h>

#define SIZE 3

void matrixValue(int matrix[SIZE][SIZE], int size) {
    int value = 1;
    for( int i = 0; i < size; i++ ) {
        for ( int j = 0; j < size; j++ ) {
            matrix[i][j] = value;
            value +=1;
        }
    }
}

void print(int matrix[SIZE][SIZE], int size) {
    int limit = size - 1;
    
    for ( int i = 0; i < size; i++ ) {
        for ( int j = 0; j < limit; j++ ) {
            printf("%d ", matrix[i][j]);
        }
        printf("%d\n", matrix[i][limit]);
    }
}

void matrixRotate90(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0, count = size - 1; row < size; row++, count-- ) {
        for ( int col = 0; col < size; col++ ) {
            target[row][col] = source[col][count];
        }
    }
}




int main() {
    int matrixT[SIZE][SIZE];
    int matrixS[SIZE][SIZE];
    
    matrixValue(matrixS, SIZE);
    print(matrixS, SIZE);
    
    printf("---------\n");
    
    matrixRotate90(matrixT, matrixS, SIZE);
    print(matrixT, SIZE);
    
    
    return 0;
}


// code works
// void matrixRotate90(int target[SIZE][SIZE], int source[SIZE][SIZE], int size);

// Поворот матрицы на 90 градусов по часовой стрелке.