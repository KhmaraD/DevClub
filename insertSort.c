void insertSort(int array[], int len) {
    for ( int i = 1; i < len; i++ ) {
        int j = i;
        int temp = array[i];
        
        for ( int prev = j - 1; j > 0 && temp < array[prev]; j--, prev-- ) {
            array[j] = array[prev];
        }
        array[j] = temp;
    }
}


#include <stdio.h>

void arrayPrint(int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

void insertSort(int array[], int len) {
    for ( int i = 1; i < len; i++ ) {
        int j = i;
        int temp = array[i];
        printf("temp %d\n", temp);
        
        for ( int prev = j - 1; j > 0 && temp < array[prev]; j--, prev-- ) {
            printf("prev %d\n", array[prev]);
            array[j] = array[prev];
            arrayPrint(array, len);
        }
        array[j] = temp;
        arrayPrint(array, len);
    }
}

int main() {
    int array[] = {7, 4, 1, 8, 5, 2, 9, 6, 3};
    int size = 9;
    
    arrayPrint(array, size);
    insertSort(array, size);
    arrayPrint(array, size);
    
    return 0;
}
