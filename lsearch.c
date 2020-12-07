#include <stdio.h>

#define MAX_SIZE 100

int intScan(FILE *in) {
    int number;
    
    fscanf(in, "%d", &number);
    return number;
}

int arrayScan(FILE *in, int array[], int limit) {
    int len = 0;
    
    for ( ; len < limit && fscanf(in, "%d", &array[len]) == 1; len++ );
    return len;
}

int arraySearch(int array[], int size, int needle) {
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] == needle ) {
            return i;
        }
    }
    return -1;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int needle = intScan(in);
    int array[MAX_SIZE];
    int size = arrayScan(in, array, MAX_SIZE);
    fclose(in);
        
    fprintf(out, "%d\n", arraySearch(array, size, needle));
    fclose(out);
    
    return 0;
}

// code works

// В файле task.in дано искомое число needle, а также последовательность чисел размером не более 100 элементов.
// Найти needle в массиве и вывести в файл task.out его индекс либо -1, если число не найдено.

// Пример ввода
// 40
// 10 20 30 40 50 60 70 80 90 100
// Пример вывода
// 3