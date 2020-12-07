#include <stdio.h>

#define SIZE 10

void merge(int array[], int lo, int mid, int hi) {
    int size = hi - lo;
    int temp[size];
    int i = lo;
    int j = mid;
    int k = 0;
    
    for ( ; i < mid && j < hi; k++ ) {
        if ( array[i] <= array[j] ) {
            temp[k] = array[i];
            i += 1;
        } else {
            temp[k] = array[j];
            j += 1;
        }
    }
    for ( ; i < mid; i++, k++ ) {
        temp[k] = array[i];
    }
    for ( ; j < hi; j++, k++ ) {
        temp[k] = array[j];
    }
    for ( i = lo, j = 0; i < hi; i++, j++ ) {
        array[i] = temp[j];
    }
}

int main() {
    int array[SIZE] = { 0, 1, 3, 5, 6, 8, 2, 4, 7, 9 };

    merge(array, 1, 6, SIZE);
    for ( int i = 0; i < SIZE; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

// code works
// void merge(int array[], int lo, int mid, int hi)
// Слияние двух сортированных подмассивов в один отсортированный подмассив.
// Первый подмассив от lo до mid не включая mid
// Второй подмассив от mid до hi не включая hi