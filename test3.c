#include <stdio.h>

void merge(int array[], int lo, int mid, int hi) {
    int size = hi - lo;
    int temp[size];
    int i = lo;
    int j = mid + 1;
    int k = 0;
    
    // mid += 1;
    // hi += 1;
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

void mergeSort(int array[], int lo, int hi) {
    int mid = (lo + hi) / 2;
    
    if ( lo != mid ) {
        return;
    }
    
    mergeSort(array, lo, mid);
    mergeSort(array, mid, hi);
    merge(array, lo, mid, hi);
}

int scanLen(FILE *in) {
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
    int len = scanLen(in);
    int array[len];
    
    arrayScanFile(in, array, len);
    fclose(in);
    mergeSort(array, 0, len-1);
    arrayPrintFile(out, array, len);
    fclose(out);
    
    return 0;
}


// В файле task.in дано число len и массив размером len элементов.
// Отсортировать элементы в порядке неубывания.
// Использовать алгоритм mergeSort.
// Результат записать в task.out
// Допустимо использование рекурсии.




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
    
    retu rn pivot;
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