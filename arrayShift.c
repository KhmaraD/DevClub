#include <stdio.h>

void arrayShift(int array[], int size, int shift) {
    int buffersize = size / 2;
    int temp[buffersize];
    
    shift %= size;
    
    if ( shift < 0 ) {
        shift += size;
    }
    if ( shift <= buffersize ) {
        for ( int i = 0, j = size - shift; j < size; i++, j++ ) {
            temp[i] = array[j];
        }
        for ( int i = size - 1, j = size - 1 - shift; i >= shift; i--, j-- ) {
            array[i] = array[j];
        }
        for ( int i = 0; i < shift; i++ ) {
            array[i] = temp[i];
        }
    } else {
        for ( int i = size - 1 - shift; i >= 0; i-- ) {
            temp[i] = array[i];
        }
        for ( int i = 0, j = size - shift; j < size; i++, j++ ) {
            array[i] = array[j];
        }
        for ( int i = size - 1, j = size - 1 - shift; j >= 0; i--, j-- ) {
            array[i] = temp[j];
        }
    }
}

void arrayPrint(int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

int main() {
    int size = 6;
    int shift;
    
    scanf("%d", &shift);
    
    int array[] = {1, 2, 3, 4, 5, 6};
    
    arrayShift(array, size, shift);
    arrayPrint(array, size);
    
    return 0;
}


// code works
// Написать функцию:
// void arrayShift(int array[], int size, int shift)
// Реализовать циклический сдвиг массива на shift элементов вправо. Максимизировать производительность при оптимальном использовании памяти.
// Требуемая сложность: O(N)
