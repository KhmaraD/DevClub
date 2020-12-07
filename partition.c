#include <stdio.h>

int partition(int array[], int start, int end) {
    int mid = (start + end) / 2;
    int temp = array[mid];
    int pivot = start;
    
    array[mid] = array[end];
    array[end] = temp;
    
    for ( ; array[pivot] < array[end]; pivot++ );
    
    for ( int i = pivot + 1; i < end; i++ ) {
        if ( array[i] < array[end] ) {
            temp = array[i];
            array[i] = array[pivot];
            array[pivot] = temp;
            pivot += 1;
        }
    }
    temp = array[pivot];
    array[pivot] = array[end];
    array[end] = temp;
    
    return pivot;
}

// int partition(int array[], int start, int end) {
//     int mid = (start + end) / 2;
//     int temp = array[mid];
//     int tail = start;
    
//     array[mid] = array[end];
//     array[end] = temp;
    
//     for ( ; array[tail] < array[end]; tail++ );

//     for ( int i = tail + 1; i < end; i++ ) {
//         if ( array[i] < array[end] ) {
//             temp = array[i];
//             array[i] = array[tail];
//             array[tail] = temp;
//             tail += 1;
//         }
//     }
    
//     temp = array[tail];
//     array[tail] = array[end];
//     array[end] = temp;
    
//     return tail;
// }

// int partition(int array[], int start, int end) {
//     int mid = (start + end) / 2;
//     int pivot = array[mid];

//     array[mid] = array[end];
//     array[end] = pivot;
//     mid = end;
//     for ( int i = start, minIndex = start, maxIndex = start; minIndex < end && maxIndex < end; i++ ) {
//         int temp;

//         for ( maxIndex = i; array[maxIndex] < pivot; maxIndex++ );
//         for ( minIndex = maxIndex; array[minIndex] > pivot; minIndex++ );
//         temp = array[minIndex];
//         array[minIndex] = array[maxIndex];
//         array[maxIndex] = temp;
//         if ( minIndex == end ) {
//             mid = maxIndex;
//         }
//         if ( maxIndex == end ) {
//             mid = minIndex;
//         }
//     }
//     return mid;
// }


void arrayPrint(int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

int main() {
    int size = 6;
    int array[] = {5, 4, 3, 2, 1, 0};
    // int array[] = {2, 1, 0, 3, 4, 5};
    
    partition(array, 0, 5);
    arrayPrint(array, size);
    
    return 0;
}


// int partition(int array[], int start, int end) {
//     int pivotIndex = (start + end) / 2;
//     int pivot = array[pivotIndex];

//     array[pivotIndex] = array[end];
//     array[end] = pivot;
//     pivotIndex = end;
//     for ( int i = start, minIndex = start, maxIndex = start; minIndex < end && maxIndex < end; i++ ) {
//         int tmp;

//         for ( maxIndex = i; array[maxIndex] < pivot; maxIndex++ );
//         for ( minIndex = maxIndex; array[minIndex] > pivot; minIndex++ );
//         tmp = array[minIndex];
//         array[minIndex] = array[maxIndex];
//         array[maxIndex] = tmp;
//         if ( minIndex == end ) {
//             pivotIndex = maxIndex;
//         }
//         if ( maxIndex == end ) {
//             pivotIndex = minIndex;
//         }
//     }
//     return pivotIndex;
// }



// // Работает для произвольного массива из n целых чисел.

// // int n, a[n]; //n - количество элементов
// void qs(int array, int first, int last)
// {
//     if (first < last)
//     {
//         int left = first, right = last, middle = array[(left + right) / 2];
//         do
//         {
//             while (array[left] < middle) left++;
//             while (array[right] > middle) right--;
//             if (left <= right)
//             {
//                 int tmp = array[left];
//                 array[left] = array[right];
//                 array[right] = tmp;
//                 left++;
//                 right--;
//             }
//         } while (left <= right);
//         qs(array, first, right);
//         qs(array, left, last);
//     }
// }
// // Исходный вызов функции qs для массива из n элементов будет иметь следующий вид.

// // qs(a, 0, n-1);

