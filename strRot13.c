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


// code works
// Написать функцию:
// void strRot13(char str[])
// Зашифровать строку по алгоритму ROT13


// #2
// void strRot13(char str[]) {
//     for ( ; *str != '\0'; str++ ) {
//         if ( *str >= 'A' && *str <= 'z' ) {
//             if ( *str > 'm' ) {
//                 *str -= 13;
//             } else if ( *str < 'N' ) {
//                 *str += 13;
//             } else if ( *str <= 'Z' ) {
//                 *str -= 13;
//             } else if ( *str >= 'a' ) {
//                 *str += 13;
//             }
//         }
//     }
// }

#include <stdio.h>

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
    char str[6];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%s", str);
    strRot13(str);
    
    fprintf(out, "%s", str);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
