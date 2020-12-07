#include <stdio.h>

void arrayShiftRight(int array[], int size) {
    int last = size - 1;
    int temp = array[last];
    
    for ( int i = last; i > 0; i-- ) {
        array[i] = array[i-1];
    }
    array[0] = temp;
}



int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    
    arrayShiftRight(array, 7);
    
    for ( int i = 0; i < 7; i++ ) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

// almost win
// Написать функцию:
// void arrayShiftRight(int array[], int size)
// Реализовать циклический сдвиг массива на 1 элемент вправо.
// Использование дополнительного массива не разрешается.