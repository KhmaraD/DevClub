#include <stdio.h>

void merge(int array[], int lo, int mid, int hi) {
    int size = hi - lo;
    int temp[size];
    int i = lo;
    int j = mid + 1;
    int k = 0;
    
    mid += 1;
    hi += 1;
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
    int mid;
    
    if ( lo < hi ) {
        mid = (lo + hi) / 2;
        mergeSort(array, lo, mid);
        mergeSort(array, mid+1, hi);
        merge(array, lo, mid, hi);
    }
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