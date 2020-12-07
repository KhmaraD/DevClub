void matrixRotate270(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0, count = size - 1; col < size; col++, count-- ) {
            target[row][col] = source[count][row];
        }
    }
}


// code works

// void matrixRotate270(int target[SIZE][SIZE], int source[SIZE][SIZE], int size);

// Поворот матрицы на 270 градусов по часовой стрелке.