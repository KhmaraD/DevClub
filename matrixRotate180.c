#include <stdio.h>

#define SIZE 3

void matrixValeu(int matrix[SIZE][SIZE], int size) {
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

void matrixRotate180(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0, newRow = size - 1; row < size; row++, newRow-- ) {
        for ( int col = 0, newCol = size - 1; col < size; col++, newCol-- ) {
            target[row][col] = source[newRow][newCol];
        }
    }
}




int main() {
    int matrixT[SIZE][SIZE];
    int matrixS[SIZE][SIZE];
    
    matrixValeu(matrixS, SIZE);
    print(matrixS, SIZE);
    
    printf("---------\n");
    
    matrixRotate180(matrixT, matrixS, SIZE);
    print(matrixT, SIZE);
    
    
    return 0;
}



// kode works
// void matrixRotate180(int target[SIZE][SIZE], int source[SIZE][SIZE], int size);

// Поворот матрицы на 180 градусов по часовой стрелке.