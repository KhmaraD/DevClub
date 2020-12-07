#include <stdio.h>

int main() {
    int len = 0;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( int x; len < 100 && fscanf(in, "%d", &x) == 1; len++ );
    
    fprintf(out, "%d\n", len);
    
    fclose(in);
    fclose(out);
    
    return 0;
}

// Считать из файла task.in последовательность чисел размером не более 100 элементов.
// Посчитать длину последовательности и вывести ее в task.out.

// Пример ввода
// 10 20 30 40 50 60 70 80 90 100
// Пример вывода
// 10



// // epic win?

// #include <stdio.h>

// #define LIMIT 100

// int main() {
//     FILE *in = fopen("task.in", "r");
//     FILE *out = fopen("task.out", "w");
//     int len = 0;
    
//     for ( int x; len < LIMIT && fscanf(in, "%d", &x) == 1; len++ );
//     fclose(in);
    
//     fprintf(out, "%d\n", len);
//     fclose(out);
    
//     return 0;
// }
