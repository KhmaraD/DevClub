#include <stdio.h>

#define LIMIT 100

int strLen(char str[]) {
    int len = 0;
    
    for ( ; str[len] != '\0'; len++ );
    return len;
}

int main() {
    char str[LIMIT+1];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%100s", str);
    fclose(in);
    
    for ( int i = 0, j = strLen(str) - 1; i < j; i++, j-- ) {
        int temp = str[i];
        
        str[i] = str[j];
        str[j] = temp;
    }
    
    fprintf(out, "%s\n", str);
    fclose(out);
    
    return 0;
}
// с переворотом строки, вконце печать всей строки
// рабочие два варианта


// code works
// В файле task.in дана строка длиной не более 100 символов.
// Прочитать строку в память и произвести ее реверс.
// Результат вывести в task.out.

// Пример ввода
// hello
// Пример вывода
// olleh



// code works
// без переворота строки, печать наоборот
#include <stdio.h>

#define LIMIT 100

int strLen(char str[]) {
    int len = 0;
    
    for ( ; str[len] != '\0'; len++ );
    return len;
}

int main() {
    char str[LIMIT+1];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%100s", str);
    fclose(in);
    
    for ( int i = strLen(str) - 1; i > 0; i-- ) {
        fprintf(out, "%c", str[i]);
    }
    fprintf(out, "%c\n", str[0]);
    fclose(out);
    
    return 0;
}


// с инета
// #include <stdio.h>

// int main() {
//     int limit = 100;
//     char str[limit];
//     int length = 0;
//     int temp;
//     FILE *in = fopen("task.in", "r");
//     FILE *out = fopen("task.out", "w");
    
//     fscanf(in, "%100s", &str);
//     for ( ; str[length] != '\0'; length++ );
//     for ( int i = 0, j = length - 1; i < j; i++, j-- ) {
//         temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//     }
//     fprintf(out, "%s\n", str);
    
//     fclose(in);
//     fclose(out);
    
//     return 0;
// }