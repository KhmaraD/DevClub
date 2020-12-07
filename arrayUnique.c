#include <stdio.h>

#define SIZE 24

int arrayPrint(int array[], int size) {
    int limit = size - 1;
    
    for ( int i = 0; i < limit; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[limit]);
}

int arrayUnique(int array[], int size) {
    int len = 0;
    
    for ( int i = 1; i < size; i++ ) {
        int count = 0;
        
        for ( int j = 0; j < i; j++ ) {
            if ( array[i] == array[j] ) {
                count += 1;
            }
        }
        if ( count == 0 ) {
            len += 1;
            array[len] = array[i];
        }
    }
    
    return len + 1;
}

int main() {
    int array[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 9, 9, 10, 10, 5, 4, 3, 2, 1};
    
    arrayUnique(array, SIZE);
    arrayPrint(array, SIZE);
    
    printf("len %d\n", arrayUnique(array, SIZE));
    
    return 0;
}


// code works
// Написать функцию:
// int arrayUnique(int array[], int size)
// Удалить из массива дубликаты элементов. Вернуть новую длину массива.

// Примечание: пример ввода и вывода показан для лучшего понимания условия задачи. Выводить результат на печать не нужно.

// Пример ввода
// 1 1 2 2 3 3 4 4 5 5 6 6 7 7 8 8 9 9 10 10 5 4 3 2 1
// Пример вывода
// array = 1 2 3 4 5 6 7 8 9 10
// len = 10


// int arrayUnique(int array[], int size) {
//     int index = 0;
    
//     for ( int i = 1; i < size; i++ ) {
//         int count = 0;
        
//         for ( int j = 0; j < i; j++ ) {
            
//             if ( array[i] == array[j] ) {
//                 count += 1;
//             }
//         }
        
//         if ( count == 0 ) {
//             index += 1;
//             array[index] = array[i];
//         }
//     }
    
//     return index + 1;
// }
