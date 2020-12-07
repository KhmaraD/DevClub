#include <stdio.h>

#define ALPHABET 26

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int array[ALPHABET];
    char temp;
    
    for ( int i = 0; i < ALPHABET; i++ ) {
        array[i] = 0;
    }
    for ( ; fscanf(in, "%c", &temp) == 1; ) {
        for ( int i = 0; i < ALPHABET; i++ ) {
            if ( temp == i + 97 || temp == i + 65 ) {
                array[i] += 1;
            }
        }
    }
    fclose(in);
    
    for ( int i = 0; i < ALPHABET; i++ ) {
        if ( array[i] > 0 ) {
            fprintf(out, "%c %d\n", i+97, array[i]);
        }
    }
    fclose(out);
    
    return 0;
}


// Создаешь массив размером равному количеству букв англ. алфавита в котором индексы массива будут соответствовать буквам,
// при считывании текста увеличиваешь значение элемента в соответствующем индексе на +1. Далее остаётся только вывести конечный результат.


// В файле task.in задана последовательность символов.
// Вывести в task.out количество вхождений латинских букв, которые встречаются в последовательности.
// Большие буквы считать как маленькие.

// Пример ввода
// Hello!
// Пример вывода
// e 1
// h 1
// l 2
// o 1

// ----------------------------------------------------------------
// #include <stdio.h>

// #define ALPHABET 26

// int main() {
//     FILE *in = fopen("task.in", "r");
//     FILE *out = fopen("task.out", "w");
//     int array[ALPHABET];
//     char character;
    
//     for ( int i = 'a'; i <= 'z'; i++ ) {
//         array[i] = 0;
//     }
//     for ( ; fscanf(in, "%c", &character) == 1; ) {
//         for ( int i = 'a'; i <= 'z'; i++ ) {
//             if ( character == i || character == i - 32 ) {
//                 array[i] += 1;
//             }
//         }
//     }
//     for ( int i = 'a'; i <= 'z'; i++ ) {
//         if ( array[i] > 0 ) {
//             fprintf(out, "%c %d\n", i, array[i]);
//         }
//     }
//     fclose(in);
//     fclose(out);
    
//     return 0;
// }


// // ---------------------------------------------------------------------
// #include <stdio.h>

// #define LIMIT 101


// int main() {
//     FILE *in = fopen("task.in", "r");
//     FILE *out = fopen("task.out", "w");
//     char str[LIMIT];
//     int len = 0;

//     fscanf(in, "%s", str);
//     fclose(in);

//     for ( int i = 0; str[i] != 0; i++ ) {
//         if (str[i] >= 'a' && str[i] <= 'z') {
//             len += 1;
//         } else if (str[i] >= 'A' && str[i] <= 'Z') {
//             str[i] -= 'A' - 'a';
//             len += 1;
//         }
//     }
//     for ( int i = 0; i < len; i++ ) {
//         int count = 1;

//         if ( str[i] == str[i+1] ) {
//             count += 1;
//             i += 1;
//             fprintf(out, "%c %d\n", str[i], count);
//         } else {
//             fprintf(out, "%c %d\n", str[i], count);
//         }
//     }

//     fclose(out);

//     return 0;
// }


