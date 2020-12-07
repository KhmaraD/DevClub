#include <stdio.h>

int intScan(FILE *in) {
    int number;
    
    fscanf(in, "%d", &number);
    return number;
}

void arrayAbs(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] < 0 ) {
            array[i] *= -1;
        }
    }
}

void arrayPrint(FILE *out, int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
}


int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = intScan(in);
    int array[size];
    
    for ( int i = 0; i < size; i++ ) {
        array[i] = intScan(in);
    }
    
    arrayAbs(array, size);
    fclose(in);
    
    arrayPrint(out, array, size);
    fclose(out);
    
    return 0;
}




// В файле task.in дана длина последовательности чисел (число больше нуля) и сама последовательность.
// Прочитать последовательность в массив.
// Найти все отрицательные числа и заменить их положительными, равными по модулю.
// Результирующий массив вывести в task.out.

// Пример ввода
// 10
// 10 -20 30 40 -50 -60 70 80 90 -100
// Пример вывода
// 10 20 30 40 50 60 70 80 90 100


// code works обидва


#include <stdio.h>

int intScan(FILE *in) {
    int number;
    
    fscanf(in, "%d", &number);
    return number;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = intScan(in);
    int array[size];
    
    for ( int i = 0; i < size; i++ ) {
        fscanf(in, "%d", &array[i]);
        if ( array[i] < 0 ) {
            array[i] *= -1;
        }
    }
    fclose(in);
    
    for ( int i = 0; i < size - 1; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[size-1]);
    fclose(out);
    
    return 0;
}
