#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( char x; fscanf(in, "%c", &x) == 1; ) {
        if ( x >= 97 && x <= 122 ) {
            x -= 32;
        }
        fprintf(out, "%c", x);
    }
    fprintf(out, "\n");
    
    fclose(in);
    fclose(out);
    
    return 0;
}


// В файле task.in дана последовательность символов.
// Перевести все буквы в верхний регистр и вывести результирующую последовательность в файл task.out

// Пример ввода
// abcd
// Пример вывода
// ABCD
