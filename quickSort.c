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

void quickSort(int array[], int lo, int hi) {
    if ( hi > lo ) {
        int pivot = partition(array, lo, hi);
        
        quickSort(array, lo, pivot-1);
        quickSort(array, pivot+1, hi);
    }
}

int scanFile(FILE *in) {
    int size;
    
    fscanf(in, "%d", &size);
    return size;
}

void arrayScanFile(FILE *in, int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
}

void arrayPrintFile(FILE *out, int array[], int size) {
    int limit = size - 1;
    
    for ( int i = 0; i < limit; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[limit]);
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int len = scanFile(in);
    int array[len];
    
    arrayScanFile(in, array, len);
    fclose(in);
    
    quickSort(array, 0, len-1);
    arrayPrintFile(out, array, len);
    fclose(out);
    
    return 0;
}

// В файле task.in дано число len и массив размером len элементов.
// Отсортировать элементы в порядке неубывания.
// Использовать алгоритм quickSort.
// Результат записать в task.out