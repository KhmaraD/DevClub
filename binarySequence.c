#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char symbol;
    int zeros = 0;
    int exchanges = 0;
    
    for ( ; fscanf(in, "%c", &symbol) == 1; ) {
        if ( symbol == '0' ) {
            zeros += 1;
        }
    }
    rewind(in);
    for ( int i = 0; i < zeros; i++ ) {
        fscanf(in, "%c", &symbol);
        if ( symbol != '0' ) {
            exchanges += 1;
        }
    }
    fclose(in);
    fprintf(out, "%d\n", exchanges);
    fclose(out);
    
    return 0;
}




// #include <stdio.h>

// int main() {
//     FILE *in = fopen("task.in", "r");
//     FILE *out = fopen("task.out", "w");
//     char symbol;
//     int zeros = 0;
//     int ones = 0;
//     int exchanges = 0;
    
//     for ( ; fscanf(in, "%c", &symbol) == 1; ) {
//         if ( symbol == '0' ) {
//             zeros += 1;
//         } else {
//             ones += 1;
//         }
//     }
//     rewind(in);
//     for ( int i = 0; i < zeros; i++ ) {
//         fscanf(in, "%c", &symbol);
//         if ( symbol != '0' ) {
//             exchanges += 1;
//         }
//     }
//     fclose(in);
//     fprintf(out, "%d\n", exchanges);
//     fclose(out);
    
//     return 0;
// }



// В файле task.in дана последовательность символов – нулей и единиц.
// Вывести в task.out минимально необходимое число обменов пар значений для упорядочивания последовательности по неубыванию.

// Пример ввода
// 1101
// Пример вывода
// 1
// Пояснение
// Необходимо обменять ноль с первой единицей.
