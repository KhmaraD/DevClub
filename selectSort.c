#include <stdio.h>

// оригинал

// void selectSort(int array[], int size) {
//     for ( int i = 0; i < size; i++ ) {
//         for ( int j = i + 1; j < size; j++ ) {
//             if ( array[j] < array[i] ) {
//                 int temp = array[i];
                
//                 array[i] = array[j];
//                 array[j] = temp;
//             }
//         }
//     }
// }


// оптимизация
void selectSort(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        int min = i;
        
        for ( int j = i + 1; j < size; j++ ) {
            if ( array[j] < array[min] ) {
                min = j;
            }
        }
        if ( min != i ) {
            int temp = array[i];
            
            array[i] = array[min];
            array[min] = temp;
        }
    }
}


void arrayPrint(int array[], int size) {
    int limit = size - 1;
    
    for ( int i = 0; i < limit; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[limit]);
}

int main() {
    int array[] = {7, 4, 1, 8, 5, 2, 9, 6, 3};
    int size = 9;
    
    arrayPrint(array, size);
    selectSort(array, size);
    arrayPrint(array, size);    
    
    return 0;
}


// void selectSort(int array[], int size) {
//     for ( int i = 0; i < size; i++ ) {
//         for ( int j = i + 1; j < size; j++ ) {
//             if ( array[j] < array[i] ) {
//                 int temp = array[i];
                
//                 array[i] = array[j];
//                 array[j] = temp;
//             }
//         }
//     }
// }