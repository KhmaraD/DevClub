#include <stdio.h>

// Реализация модифицированного алгоритма «пузырька» с проверкой на предмет отсортированности.

void bubbleSort(int array[], int size) {
    int last = size - 1;
    int isSorted = 0;
    
    for ( int i = 0; i < last && !isSorted; i++ ) {
        int limit = last - i;
        
        isSorted = 1;
        
        for ( int j = 0; j < limit; j++ ) {
            int next = j + 1;
            
            if ( array[j] > array[next] ) {
                int temp = array[j];
                
                array[j] = array[next];
                array[next] = temp;
                isSorted = 0;
            }
        }
    }
}

// классическая версия алгоритма.

// void bubbleSort(int array[], int size) {
//     int last = size - 1;
    
//     for ( int i = 0; i < last; i++ ) {
//         int limit = last - i;
        
//         for ( int j = 0; j < limit; j++ ) {
//             int next = j + 1;
            
//             if ( array[j] > array[next] ) {
//                 int temp = array[j];
                
//                 array[j] = array[next];
//                 array[next] = temp;
//             }
//         }
//     }
// }



void arrayPrint(int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

int main() {
    int size = 5;
    int array[] = {3, 1, 4, 5, 2, 6};
    
    arrayPrint(array, size);
    bubbleSort(array, size);
    arrayPrint(array, size);
    
    return 0;
}
