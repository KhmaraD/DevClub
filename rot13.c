#include <stdio.h>

#define SIZE 100

void strRot13(char str[]) {
    for ( char *coded = str; *coded != '\0'; coded++ ) {
        if ( *coded >= 'a' && *coded <= 'z' ) {
            if ( *coded < 'n' ) {
                *coded += 13;
            } else if ( *coded > 'm' ) {
                *coded -= 13;
            }
        } else if ( *coded >= 'A' && *coded <= 'Z' ) {
            if ( *coded < 'N' ) {
                *coded += 13;
            } else if ( *coded > 'M' ) {
                *coded -= 13;
            }
        }
    }
}

int main() {
    char str[SIZE+1];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%100s", str);
    fclose(in);
    
    strRot13(str);
    
    fprintf(out, "%s\n", str);
    fclose(out);
    
    return 0;
}



// code works
// Считать из файла task.in в память строку длиной не более 100 символов.
// Зашифровать её по алгоритму ROT13.
// Результат вывести в task.out.

// Пример ввода
// balk
// Пример вывода
// onyx